#ifndef RESULT_H
#define RESULT_H

#include <QMainWindow>
#include <iostream>
#include <string>

namespace Ui {
class Result;
}

class Result : public QMainWindow
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = nullptr);
    ~Result();

private slots:
    void on_actionExit_triggered();

private:
    Ui::Result *ui;
};

#endif // RESULT_H
