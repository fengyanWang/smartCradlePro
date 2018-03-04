#include "learndiolag.h"
#include "ui_learndiolag.h"

LearnDiolag::LearnDiolag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LearnDiolag)
{
    ui->setupUi(this);
}

LearnDiolag::~LearnDiolag()
{
    delete ui;
}
