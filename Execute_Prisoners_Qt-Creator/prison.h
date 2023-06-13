#ifndef PRISON_H
#define PRISON_H

#include <QMainWindow>
#include "order.h"
#include <iostream>
#include <string>

using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class Prison; }
QT_END_NAMESPACE

class Prison : public QMainWindow
{
    Q_OBJECT


public:
    Prison(QWidget *parent = nullptr);
    ~Prison();

//    QString t_Prisoners;
//    string temp_Prisoners;
//    int numOfPrisoners;
//    int* Prisoners;



private slots:
    void on_NumOfPrisonersSubmitButton_clicked();

    void on_actionExit_triggered();

private:

    Ui::Prison *ui;

    Order *OD;

};
#endif // PRISON_H
