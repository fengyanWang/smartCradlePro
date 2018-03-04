#ifndef LEARNDIOLAG_H
#define LEARNDIOLAG_H

#include <QDialog>

namespace Ui {
class LearnDiolag;
}

class LearnDiolag : public QDialog
{
    Q_OBJECT

public:
    explicit LearnDiolag(QWidget *parent = 0);
    ~LearnDiolag();

private:
    Ui::LearnDiolag *ui;
};

#endif // LEARNDIOLAG_H
