#include "cradlewindow.h"
#include "ui_cradlewindow.h"

#include "heathcare.h"
#include "learndiolag.h"
#include "safetymonitor.h"
#include "usermanger.h"


cradleWindow::cradleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cradleWindow)
{
    ui->setupUi(this);
}

cradleWindow::~cradleWindow()
{
    delete ui;
}

void cradleWindow::on_nannyLabel_windowTitleChanged(const QString &title)
{

}

void cradleWindow::on_babysisterPushBt_clicked()
{
    userManger *myUserManger = new userManger;
    myUserManger->show();
}

void cradleWindow::on_doctorPushBt_clicked()
{
    heathCare *myHeathCare = new heathCare;
    myHeathCare->show();
}

void cradleWindow::on_techerPushBt_clicked()
{
    LearnDiolag *myLearnDiolog = new LearnDiolag;
    myLearnDiolog->show();
}

void cradleWindow::on_policePushBt_clicked()
{
    safetyMonitor* mySafeMonitor = new safetyMonitor;
    mySafeMonitor->show();
}

