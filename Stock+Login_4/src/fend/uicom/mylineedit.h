#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>
#include <QKeyEvent>

class MyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    MyLineEdit(QWidget*parent=nullptr);

protected:
    void KeyPressEvent(QKeyEvent*event);

};

#endif // MYLINEEDIT_H
