#include <QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //Widget w;
    //w.show();
    OvenTimer ovenTimer;
    ovenTimer.setWindowTitle(QObject::tr("Oven Timer"));
    ovenTimer.resize(300,300);
    ovenTimer.show();
    return app.exec();
}
