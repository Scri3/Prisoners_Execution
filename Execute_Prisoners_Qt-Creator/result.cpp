#include "result.h"
#include "ui_result.h"
#include "globalvars.h"


Result::Result(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);



    result = numOfPrisoners / OrderNum;

    QString prisS= QString::number(numOfPrisoners);

    ui->label_3->setText("Prisoners: "+prisS);

    QString orderS= QString::number(OrderNum);

    ui->label_4->setText("Order: "+orderS);

    QString resS= QString::number(result);

    ui->label_2->setText("Number of executions: "+resS);



    int inc = 0;
    int COrder = OrderNum;
    while (inc < result) {

        QString sPrisoner= QString::number(Prisoners[COrder-1]);

        ui->listWidget->addItem("Prisoner number "+sPrisoner);

        COrder = COrder + OrderNum;
        inc++;
    }



}

Result::~Result()
{
    delete ui;
}

void Result::on_actionExit_triggered()
{
    QApplication::quit();
}
