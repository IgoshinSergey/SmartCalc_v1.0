#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_dot, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_open_bracket, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_close_bracket, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_scale, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this,
          SLOT(symbols_to_input()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(symbols_to_input()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this,
          SLOT(functions_to_input()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::symbols_to_input() {
  QPushButton *button = (QPushButton *)sender();
  QString text;
  text = ui->lineEdit_expression->text() + button->text();
  ui->lineEdit_expression->setText(text);
}

void MainWindow::functions_to_input() {
  QPushButton *button = (QPushButton *)sender();
  QString text;
  text = ui->lineEdit_expression->text() + button->text() + "(";
  ui->lineEdit_expression->setText(text);
}

void MainWindow::on_pushButton_del_clicked() {
  ui->lineEdit_expression->clear();
  ui->lineEdit_x->clear();
}

void MainWindow::on_pushButton_eq_clicked() {
  string expression = ui->lineEdit_expression->text().toStdString();
  string x_string = ui->lineEdit_x->text().toStdString();
  char *expr = (char *)expression.c_str();
  char *x = (char *)x_string.c_str();
  int error = OK;
  double res = calculate(expr, x, &error);
  if (error == OK) {
    QString text = QString::number(res, 'g', 12);
    ui->lineEdit_expression->setText(text);
    ui->lineEdit_x->clear();
  } else {
    QMessageBox::warning(this, "Ошибка", "Вычислительная ошибка");
    ui->lineEdit_expression->clear();
    ui->lineEdit_x->clear();
  }
}

void MainWindow::on_pushButton_graph_clicked() {
  string num = "0";
  string expression = ui->lineEdit_expression->text().toStdString();
  char *number = (char *)num.c_str();
  char *expr = (char *)expression.c_str();
  int error = OK;
  if (strlen(expr) == 0) {
    QMessageBox::warning(this, "Ошибка", "Введите арифметическое выражение");
  } else {
    calculate(expr, number, &error);
    if (error == FAIL) {
      QMessageBox::warning(this, "Ошибка", "Ошибка в арифметическом выражении");
    } else {
      Graph window = Graph(nullptr, expression);
      window.setModal(true);
      window.exec();
    }
  }
}
