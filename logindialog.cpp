#include "logindialog.h"
#include "ui_logindialog.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}


void loginDialog::on_LoginPushBt_clicked()
{
    QString averageUser;
    QString adminUser;
    QString averageUserPwd;
    QString adminUserPwd;

    int count = 0;

    if(ui->passWdLineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("请输入密码"),tr("请先输入密码再登录！"),QMessageBox::Ok);
        ui->passWdLineEdit->setFocus();
    }
    else
    {
        QString filepath="C:/Users/WFY/Desktop/SmartCradle/smartCradlePro/smartCradlePro/smartCradle/PassWd.txt";
        QFile PassWordFile(filepath);
        QTextStream in(&PassWordFile);
        QTextStream cout(stdout,  QIODevice::WriteOnly);
        if(PassWordFile.open(QIODevice::ReadOnly))
        {
            while(!in.atEnd())
            {
                count ++;
                switch (count){
                    case 1: averageUser = in.readLine();
                    case 2: averageUserPwd = in.readLine();
                    case 3: adminUser = in.readLine();
                    case 4: adminUserPwd = in.readLine();
                }
                cout<<"averageUser:"<<averageUser<<endl;
                cout<<"averageUserPwd:"<<averageUserPwd<<endl;
                cout<<"adminUser:"<<adminUser<<endl;
                cout<<"adminUserPwd:"<<adminUserPwd<<endl;
            }
        }
        if (ui->administratorRadioBt->isChecked())
        {
            if(adminUser==ui->userNamLlineEdit->text())
            {
                if (adminUserPwd == ui->passWdLineEdit->text())
                {
                    QDialog::accept();
                }
                else
                {
                    QMessageBox::warning(this,tr("密码错误"),tr("请输入正确密码再登录"),QMessageBox::Ok);
                    ui->passWdLineEdit->clear();
                    ui->passWdLineEdit->setFocus();
                }
            }
            else
            {
                QMessageBox::warning(this,tr("管理员用户名错误"),tr("请输入正确的管理员用户名再登录"),QMessageBox::Ok);
                ui->userNamLlineEdit->clear();
                ui->userNamLlineEdit->setFocus();
            }
        }
        else
        {
            if(averageUser==ui->userNamLlineEdit->text())
            {
                if (averageUserPwd == ui->passWdLineEdit->text())
                {
                    QDialog::accept();
                }
                else
                {
                    QMessageBox::warning(this,tr("密码错误"),tr("请输入正确密码再登录"),QMessageBox::Ok);
                    ui->passWdLineEdit->clear();
                    ui->passWdLineEdit->setFocus();
                }
            }
            else
            {
                QMessageBox::warning(this,tr("用户名错误"),tr("请输入正确的用户名再登录"),QMessageBox::Ok);
                ui->userNamLlineEdit->clear();
                ui->userNamLlineEdit->setFocus();
            }
        }
    }
}

void loginDialog::on_canclePushBt_clicked()
{
    ui->userNamLlineEdit->clear();
    ui->passWdLineEdit->clear();
    QDialog::reject();
}
