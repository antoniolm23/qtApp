#ifndef BALANCE_H
#define BALANCE_H

#include <QMainWindow>

namespace Ui {
class Balance;
}

class Balance : public QMainWindow
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = 0);
    ~Balance();

private:
    Ui::Balance *ui;
};

#endif // BALANCE_H
