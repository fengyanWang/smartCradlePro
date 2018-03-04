#include "heathcare.h"
#include "ui_heathcare.h"

heathCare::heathCare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::heathCare)
{
    ui->setupUi(this);
}

heathCare::~heathCare()
{
    delete ui;
}
