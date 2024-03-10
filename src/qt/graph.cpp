#include "graph.h"

#include "ui_graph.h"

Graph::Graph(QWidget *parent, string str) : QDialog(parent), ui(new Ui::Graph) {
  ui->setupUi(this);
  expression = str;
  h = 0.1;
  xBegin = -10;
  xEnd = 10 + h;
  yMin = -10;
  yMax = 10;
  Graph::makePlot(str);
}

Graph::~Graph() { delete ui; }

void Graph::makePlot(string str) {
  char *expr_str = (char *)expression.c_str();
  ui->customPlot->xAxis->setRange(xBegin, xEnd - h);
  ui->customPlot->xAxis->setLabel("x");
  ui->customPlot->yAxis->setRange(yMin, yMax);
  ui->customPlot->yAxis->setLabel("y");

  int error = OK;
  stack *stack_expr = NULL;
  parse(expr_str, &stack_expr);
  reversePolishNotation(&stack_expr);

  for (X = xBegin; X <= xEnd; X += h) {
    double res = get_result(stack_expr, X);
    if (!isinf(res) && !isnan(res)) {
      x.push_back(X);
      y.push_back(res);
    }
  }
  destroy_stack(&stack_expr);

  ui->customPlot->addGraph();
  ui->customPlot->graph(0)->addData(x, y);
  ui->customPlot->replot();
}

void Graph::on_pushButton_clicked() {
  h = ui->doubleSpinBox_step->value();
  xBegin = ui->doubleSpinBox_min_x->value();
  xEnd = ui->doubleSpinBox_max_x->value() + h;
  yMin = ui->doubleSpinBox_min_y->value();
  yMax = ui->doubleSpinBox_max_y->value();
  if (xEnd - xBegin < 1 || yMax - yMin < 1) {
    QMessageBox::warning(
        this, "Ошибка",
        "xMax должен быть больше xMin\nyMax должен быть больше yMin");
  } else {
    ui->customPlot->clearGraphs();
    x.clear();
    y.clear();
    makePlot(expression);
  }
}
