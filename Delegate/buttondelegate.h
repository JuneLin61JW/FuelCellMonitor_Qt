#ifndef BUTTONDELEGATE_H
#define BUTTONDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class buttonDelegate : public QStyledItemDelegate {
    Q_OBJECT
public:
    explicit buttonDelegate(QStyledItemDelegate* parent = nullptr);
    ~buttonDelegate();
    //设置按钮样式和文本
    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;

    //相应item的编辑事件
    bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index);

signals:
    void clicked(int row); //发出点击信号，并传出当前行

private:
    QPoint m_mousePoint; // 鼠标位置
    int m_nType; // 按钮状态：0-划过 1-按下
};

#endif // BUTTONDELEGATE_H
