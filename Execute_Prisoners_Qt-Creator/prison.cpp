#include "prison.h"
#include "./ui_prison.h"
#include "order.h"
#include <QMessageBox>
#include "globalvars.h"


Prison::Prison(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Prison)
{
    ui->setupUi(this);


}

Prison::~Prison()
{
    delete ui;
}





void Prison::on_NumOfPrisonersSubmitButton_clicked()
{

    t_Prisoners = ui->NumOfPrisonersInput->displayText();

    temp_Prisoners= t_Prisoners.toStdString();
    for (char c : temp_Prisoners) {
        if (!isdigit(c)) {
            QMessageBox::critical(this, "Warning! ", "Please enter a valid number! ");
            ui->NumOfPrisonersInput->setText(NULL);
            break;


        }

    }
    if(ui->NumOfPrisonersInput->displayText()!=""){

        numOfPrisoners = stoi(temp_Prisoners);

        if (numOfPrisoners >= 1) {
            Prisoners = new int[numOfPrisoners];

            int g = 0;
            while (g < numOfPrisoners)
            {
                Prisoners[g] = g + 1;
                g++;
            }


            hide();
            OD = new Order(this);
            OD->show();


        }
        else {
            QMessageBox::critical(this, "Warning! ", "Number of prisoners cannot be 0!!!\n\nPlease enter a valid number. ");
            ui->NumOfPrisonersInput->setText(NULL);
        }
    }





}


void Prison::on_actionExit_triggered()
{
    QApplication::quit();
}

