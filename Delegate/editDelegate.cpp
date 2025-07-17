#include "editDelegate.h"
#include <QMessageBox>
#include <QApplication>
#include <QtWidgets>

editDelegate::editDelegate(QObject* parent)
    : QStyledItemDelegate(parent)
{
}

void editDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //注意，此时index是logicIndex（model坐标），我们可以通过拖拽表头项交换列来测试
    Q_ASSERT(index.isValid());
    //QStyle会根据option的属性进行绘制，我们也可以不使用QStyle的规则，完全自定义
    QStyleOptionViewItem opt = option;
    //去掉焦点虚线框 setFocusPolicy(Qt::NoFocus);
    opt.state &= ~QStyle::State_HasFocus;
    initMyStyleOption(&opt, index);

    if (index.column() == 2) {
        painter->save();

        painter->setRenderHint(QPainter::Antialiasing, true); //公共函数用于设置渲染操作,QPainter::Antialiasing 告诉绘图引擎应该在可能的情况下进行边的反锯齿绘制

        QPen pen;
        pen.setColor(QColor(0,0,0));
        pen.setWidth(1);
        painter->setPen(pen);

        QRect rect = option.rect;
        QPoint lb ;
        lb.setY(rect.y()+rect.height());
        lb.setX(rect.left());
        QPoint rb;
        rb.setY(rect.y()+rect.height());
        rb.setX(rect.right());

        painter->drawLine(lb,rb);

        painter->restore();
    }

    const QWidget *widget = opt.widget;
    QStyle *style = widget ? widget->style() : QApplication::style();
    style->drawControl(QStyle::CE_ItemViewItem, &opt, painter, widget);

}

QSize editDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::sizeHint(option,index);
}

QWidget* editDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    Q_UNUSED(option)
    if (!index.isValid())
        return nullptr;

    switch (index.column()) {
    case 2: //lineEdit
    {
        QLineEdit* lineEdit = new QLineEdit(parent);
        lineEdit->setFrame(false);
        lineEdit->setStyleSheet("border-color:#bd71c7;border-style:solid;border-top-width:0px;border-right-width:0px;border-bottom-width:1px;border-left-width:0px;");
        lineEdit->setAlignment(Qt::AlignCenter);

        QIntValidator  *IntValidator = new QIntValidator(lineEdit) ;
        lineEdit->setValidator(IntValidator);  //限制输入只能为数字，因此输入数字后无法置空

        return lineEdit;
    }
    default:
        break;
    }
    return nullptr;

}

void editDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const
{
    switch (index.column()) {
    case 2:
    {
        QLineEdit* lineEdit = static_cast<QLineEdit*>(editor);
        lineEdit->setText(index.data(Qt::DisplayRole).toString());
        break;
    }
    default:
        break;
    }

}

void editDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const
{
    switch (index.column()) {
    case 2:
    {
        QLineEdit* lineEdit = static_cast<QLineEdit*>(editor);
        model->setData(index,lineEdit->text(),Qt::DisplayRole);
        break;
    }
    default:
        break;
    }


}

void editDelegate::updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    Q_UNUSED(index)
    editor->setGeometry(option.rect);
}

void editDelegate::initMyStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const
{
    //字体
    QVariant value = index.data(Qt::FontRole);
    if (value.isValid() && !value.isNull()) {
        option->font = qvariant_cast<QFont>(value).resolve(option->font);
        option->fontMetrics = QFontMetrics(option->font);
    }

    //对齐方式
    //value = index.data(Qt::TextAlignmentRole);
    //if (value.isValid() && !value.isNull())
    //    option->displayAlignment = Qt::Alignment(value.toInt());
    //也可以直接全部指定为居中对齐
    option->displayAlignment = Qt::AlignCenter;

    //前景色
    value = index.data(Qt::ForegroundRole);
    if (value.canConvert<QBrush>())
        option->palette.setBrush(QPalette::Text, qvariant_cast<QBrush>(value));

    option->index = index;
    //文本
    value = index.data(Qt::DisplayRole);
    if (value.isValid() && !value.isNull()) {
        option->features |= QStyleOptionViewItem::HasDisplay;
        option->text = displayText(value, option->locale);
    }

    //背景色
    option->backgroundBrush = qvariant_cast<QBrush>(index.data(Qt::BackgroundRole));
    // disable style animations for checkboxes etc. within itemviews (QTBUG-30146)

    option->styleObject = nullptr;
}




