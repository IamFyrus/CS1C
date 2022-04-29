#ifndef SELECTDAY_H
#define SELECTDAY_H

#include <QMainWindow>

namespace Ui {
class SelectDay;
}

class SelectDay : public QMainWindow
{
    Q_OBJECT

public:
    explicit SelectDay(QWidget *parent = nullptr);
    ~SelectDay();

private:
    Ui::SelectDay *ui;
};

#endif // SELECTDAY_H
