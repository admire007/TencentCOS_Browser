#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginDialog;
}
QT_END_NAMESPACE

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    void updateLoginInfo();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_pushButton_Close_clicked();
    void on_pushButton_LoginIn_clicked();

private:
    Ui::LoginDialog *ui;

    QPoint m_start;
};
#endif // LOGINDIALOG_H
