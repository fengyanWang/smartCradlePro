#ifndef CRADLEWINDOW_H
#define CRADLEWINDOW_H

#include <QMainWindow>

namespace Ui {
class cradleWindow;
}

class cradleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit cradleWindow(QWidget *parent = 0);
    ~cradleWindow();

private slots:
    void on_nannyLabel_windowTitleChanged(const QString &title);

    void on_babysisterPushBt_clicked();

    void on_doctorPushBt_clicked();

    void on_techerPushBt_clicked();

    void on_policePushBt_clicked();

private:
    Ui::cradleWindow *ui;
};

#endif // CRADLEWINDOW_H
