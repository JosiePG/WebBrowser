#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Browser;
}
QT_END_NAMESPACE

class Browser : public QMainWindow
{
    Q_OBJECT

public:
    Browser(QWidget *parent = nullptr);
    ~Browser();

private:
    Ui::Browser *ui;
};
#endif // BROWSER_H
