#ifndef TRANSPARENTWINDOW_H
#define TRANSPARENTWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class TransparentWindow; }
QT_END_NAMESPACE

class TransparentWindow : public QMainWindow
{
    Q_OBJECT

public:
    TransparentWindow(QWidget *parent = nullptr);
    ~TransparentWindow();

private:
    Ui::TransparentWindow *ui;
protected:
    void paintEvent(QPaintEvent *e);
};
#endif // TRANSPARENTWINDOW_H
