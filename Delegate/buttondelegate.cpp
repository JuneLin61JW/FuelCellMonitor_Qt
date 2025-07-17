#include "buttondelegate.h"
#include <QApplication>
#include <QDebug>
#include <QMouseEvent>
#include <QPushButton>
#include <QToolTip>

buttonDelegate::buttonDelegate(QStyledItemDelegate* parent)
    : QStyledItemDelegate(parent)
{
}

buttonDelegate::~buttonDelegate()
{
}

void buttonDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QStyleOptionViewItem viewOption(option);
    initStyleOption(&viewOption, index);
    if (option.state.testFlag(QStyle::State_HasFocus))
        viewOption.state = viewOption.state ^ QStyle::State_HasFocus;

    QStyledItemDelegate::paint(painter, viewOption, index);

    QStyleOptionButton btnStyle;
    btnStyle.rect = option.rect; //设置按钮区域为当前item的rect
    btnStyle.state |= QStyle::State_Enabled; //设置按钮状态

    if (btnStyle.rect.contains(m_mousePoint)) {
        if (m_nType == 0) {
            btnStyle.state |= QStyle::State_MouseOver;
        } else if (m_nType == 1) {
            btnStyle.state |= QStyle::State_Sunken;
        }
    }

    QPushButton btn;
    btn.setStyleSheet("QPushButton {border: none; background-color: transparent; image:url(:/picture/download);} \
                                 QPushButton:hover {image:url(:/picture/download_red);} ;");

    btn.style()->drawControl(QStyle::CE_PushButton, &btnStyle, painter, &btn); //将按钮绘制出来
}

bool buttonDelegate::editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index)
{
    Q_UNUSED(model)
    m_nType = -1;
    bool bRepaint = false;
    QMouseEvent* pEvent = static_cast<QMouseEvent*>(event);
    m_mousePoint = pEvent->pos();

    // 鼠标位于按钮之上
    if (option.rect.contains(m_mousePoint)) {
        bRepaint = true;
        switch (event->type()) {
        // 鼠标滑过
        case QEvent::MouseMove: {
            m_nType = 0;
            QToolTip::showText(pEvent->globalPos(), "写入");
            break;
        }
        // 鼠标按下
        case QEvent::MouseButtonPress: {
            m_nType = 1;
            break;
        }
        // 鼠标释放
        case QEvent::MouseButtonRelease: {

            emit clicked(index.row());
            break;
        }
        default:
            break;
        }
    }

    return bRepaint;
}
