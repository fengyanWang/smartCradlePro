#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = 0);
    ~loginDialog();

private slots:
    void on_LoginPushBt_clicked();

    void on_canclePushBt_clicked();

private:
    Ui::loginDialog *ui;
};

#endif // LOGINDIALOG_H
