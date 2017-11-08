#ifndef ADDACTIVITY_H
#define ADDACTIVITY_H

#include <QDialog>

namespace Ui {
class addActivity;
}

class addActivity : public QDialog
{
    Q_OBJECT

public:
    explicit addActivity(QWidget *parent = 0);
    ~addActivity();

private:
    Ui::addActivity *ui;
};

#endif // ADDACTIVITY_H
