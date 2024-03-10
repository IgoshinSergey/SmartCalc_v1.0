#ifndef GRAPH_H
#define GRAPH_H

#include <QDialog>
#include <QVector>

#include "mainwindow.h"
#include "qcustomplot.h"

using namespace std;

namespace Ui {
class Graph;
}

class Graph : public QDialog {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr, string = "");
  ~Graph();

 private:
  Ui::Graph *ui;
  double xBegin, xEnd, h, X;
  double yMin, yMax;
  string expression;
  QVector<double> x, y;

 private slots:
  void makePlot(string str);

  void on_pushButton_clicked();
};
#endif  // GRAPH_H
