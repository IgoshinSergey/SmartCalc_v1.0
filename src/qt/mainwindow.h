#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <string>

using namespace std;

#include "graph.h"
#include "ui_mainwindow.h"

extern "C" {
#include "../calculations/smart_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void symbols_to_input();

  void functions_to_input();

  void on_pushButton_del_clicked();

  void on_pushButton_eq_clicked();

  void on_pushButton_graph_clicked();

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
