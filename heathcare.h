#ifndef HEATHCARE_H
#define HEATHCARE_H

#include <QDialog>

namespace Ui {
class heathCare;
}

class heathCare : public QDialog
{
    Q_OBJECT

public:
    explicit heathCare(QWidget *parent = 0);
    ~heathCare();

private:
    Ui::heathCare *ui;
};

#endif // HEATHCARE_H
