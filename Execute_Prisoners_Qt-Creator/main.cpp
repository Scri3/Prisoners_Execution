#include "prison.h"
#include "order.h"
#include "result.h"


#include <iostream>
#include <string>

#include <QApplication>

int main(int argc, char *argv[])
{
    using namespace std;


    QApplication a(argc, argv);
    Prison i;
    i.show();
    return a.exec();

}
