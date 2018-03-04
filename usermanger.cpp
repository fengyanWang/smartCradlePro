#include "usermanger.h"
#include "ui_usermanger.h"

userManger::userManger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userManger)
{
    ui->setupUi(this);
}

userManger::~userManger()
{
    delete ui;
}
