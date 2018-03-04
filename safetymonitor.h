#ifndef SAFETYMONITOR_H
#define SAFETYMONITOR_H

#include <QDialog>

namespace Ui {
class safetyMonitor;
}

class safetyMonitor : public QDialog
{
    Q_OBJECT

public:
    explicit safetyMonitor(QWidget *parent = 0);
    ~safetyMonitor();

private:
    Ui::safetyMonitor *ui;
};

#endif // SAFETYMONITOR_H
