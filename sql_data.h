#ifndef SQL_DATA_H
#define SQL_DATA_H

#include <QWidget>

namespace Ui {
class sql_data;
}

class sql_data : public QWidget {
    Q_OBJECT

public:
    explicit sql_data(QWidget* parent = nullptr);
    ~sql_data();

private:
    Ui::sql_data* ui;
};

#endif // SQL_DATA_H
