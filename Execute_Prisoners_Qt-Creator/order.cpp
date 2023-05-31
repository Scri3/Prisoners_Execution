#include "order.h"
#include "ui_order.h"
#include "prison.h"
#include "result.h"
#include "globalvars.h"


#include <QMessageBox>



Order::Order(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
}

Order::~Order()
{
    delete ui;
}



void Order::on_OrderSubmitButton_clicked()
{

    t_Order = ui->OrderInput->displayText();
    temp_Order= t_Order.toStdString();

    for (char c : temp_Order) {
        if (!isdigit(c)) {
            QMessageBox::critical(this, "Warning! ", "Please enter a valid number! ");
            ui->OrderInput->setText(NULL);
            break;
        }
    }

    if(ui->OrderInput->displayText()!=""){
        OrderNum = stoi(temp_Order);




        if ((OrderNum <= numOfPrisoners) && (OrderNum > 0)) {




            hide();
            RS = new Result(this);
            RS->show();


        }



        else if(OrderNum == 0) {
            QMessageBox::critical(this, "Warning! ", "Order cannot be 0!!!\n\nEnter a Valid number. ");
            ui->OrderInput->setText(NULL);


        }
        else {
            QMessageBox::critical(this, "Warning! ", "Invalid number!!!\n\nEnter a number less than or equal to the number of prisoners. ");
            ui->OrderInput->setText(NULL);
        }

    }

}


void Order::on_actionExit_triggered()
{
    QApplication::quit();
}

