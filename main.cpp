#include "cradlewindow.h"
#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cradleWindow cradleWin;
    loginDialog dlg;
    if(dlg.exec()==QDialog::Accepted)
    {
        cradleWin.show();
        return a.exec();
    }
    else
    {
        return 0;
    }
    return a.exec();
}
