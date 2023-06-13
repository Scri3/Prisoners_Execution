#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include "result.h"



using namespace std;

namespace Ui {
class Order;
}

class Order : public QMainWindow
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = nullptr);
    ~Order();

//    QString t_Order;
//    string temp_Order;
//    int OrderNum;
//    int v;
//    int result;




private slots:
    void on_OrderSubmitButton_clicked();

    void on_actionExit_triggered();

private:
    Ui::Order *ui;

    Result *RS;
};

#endif // ORDER_H
