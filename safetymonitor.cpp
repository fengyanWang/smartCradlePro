#include "safetymonitor.h"
#include "ui_safetymonitor.h"

safetyMonitor::safetyMonitor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::safetyMonitor)
{
    ui->setupUi(this);
}

safetyMonitor::~safetyMonitor()
{
    delete ui;
}
