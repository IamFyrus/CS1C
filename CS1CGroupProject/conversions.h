#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <QMainWindow>

namespace Ui {
class Conversions;
}

class Conversions : public QMainWindow
{
    Q_OBJECT

public:
    explicit Conversions(QWidget *parent = nullptr);
    ~Conversions();

private:
    Ui::Conversions *ui;
};

#endif // CONVERSIONS_H
