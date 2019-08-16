#ifndef HABITTRACKER_H
#define HABITTRACKER_H

#include <QMainWindow>
#include <vector>
#include <QString>

namespace Ui {
class HabitTracker;
}

class HabitTracker : public QMainWindow
{
    Q_OBJECT

public:
    explicit HabitTracker(QWidget *parent = nullptr);
    ~HabitTracker();

private slots:
    void on_add_btn_clicked();

private:
    Ui::HabitTracker *ui;
    std::map<QString, QString> habit;
    int i = 0;

};

#endif // HABITTRACKER_H
