#include "habittracker.h"
#include "ui_habittracker.h"

#include <QInputDialog>
#include <QLineEdit>
#include <QListWidgetItem>

HabitTracker::HabitTracker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HabitTracker)
{
    ui->setupUi(this);
    ui->add_btn->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.193182 rgba(241, 109, 128, 255), stop:0.886364 rgba(255, 235, 185, 255), stop:1 rgba(255, 255, 255, 255));"
                               "color: rgba(32,32,32);"
                               "border-style: outset;"
                               "border-width: 2px;"
                               "border-radius: 10px;"
                               "border-color: pink;");
   ui->tableWidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.193182 rgba(241, 221, 188, 255), stop:0.539773 rgba(255, 217, 185, 255), stop:0.863636 rgba(255, 234, 234, 255));"
                                 "border-style: dotted;"
                                 "border-width: 3px;"
                                 "border-radius: 10px; "
                                 "border-color: pink white;"
                                 "font-family: Terminal;"
                                 "color: black;"
                                  "font-size: 10px;"
                                  "font-align: center;");
   ui->tableWidget->setRowCount(100);
   ui->tableWidget->setColumnWidth(0, 300);
   ui->tableWidget->setColumnWidth(1, 300);
   ui->tableWidget->setColumnWidth(2, 200);


}
HabitTracker::~HabitTracker()
{
    delete ui;
}

void HabitTracker::on_add_btn_clicked()
{
   QString habitName= QInputDialog::getText(this, tr("Add a New Habit"), tr("Name of Habit: "), QLineEdit::Normal);
   QString dateLog= QInputDialog::getText(this, tr("Add a New Habit"), tr("Date: "), QLineEdit::Normal);
   habit.insert({habitName,dateLog});

  QTableWidgetItem *m_habit = new QTableWidgetItem;
  QTableWidgetItem *m_date = new QTableWidgetItem;

   for(auto itr = habit.begin(); itr != habit.end(); ++itr)
  {
    m_habit->setText(itr->first);
    m_date->setText(itr->second);
    m_habit->setTextAlignment(Qt::AlignCenter);
    m_date->setTextAlignment(Qt::AlignCenter);
  }
   ui->tableWidget->setItem(i, 0, m_habit);
   ui->tableWidget->setItem(i, 1, m_date);
   i++;
}
