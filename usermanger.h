#ifndef USERMANGER_H
#define USERMANGER_H

#include <QDialog>

namespace Ui {
class userManger;
}

class userManger : public QDialog
{
    Q_OBJECT

public:
    explicit userManger(QWidget *parent = 0);
    ~userManger();

private:
    Ui::userManger *ui;
};

#endif // USERMANGER_H
