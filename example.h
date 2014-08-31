#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QMainWindow>

namespace Ui {
class Example;
}

class Example : public QMainWindow
{
    Q_OBJECT

public:
    explicit Example(QWidget *parent = 0);
    ~Example();

private:
    Ui::Example *ui;
};

#endif // EXAMPLE_H
