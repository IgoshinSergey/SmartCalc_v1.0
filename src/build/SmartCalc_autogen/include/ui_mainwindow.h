/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_open_bracket;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_close_bracket;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_5;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_scale;
    QPushButton *pushButton_7;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_9;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_del;
    QLineEdit *lineEdit_expression;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_log;
    QPushButton *pushButton_8;
    QPushButton *pushButton_plus;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_x;
    QLineEdit *lineEdit_x;
    QPushButton *pushButton_graph;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(468, 522);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(100000, 100000));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman [urw]"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);\n"
"color: rgb(0, 0, 0)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(70, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nimbus Sans [urw]"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setKerning(true);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_4, 5, 4, 1, 1);

        pushButton_open_bracket = new QPushButton(centralwidget);
        pushButton_open_bracket->setObjectName(QString::fromUtf8("pushButton_open_bracket"));
        sizePolicy1.setHeightForWidth(pushButton_open_bracket->sizePolicy().hasHeightForWidth());
        pushButton_open_bracket->setSizePolicy(sizePolicy1);
        pushButton_open_bracket->setMinimumSize(QSize(70, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nimbus Sans [urw]"));
        font2.setPointSize(19);
        font2.setBold(true);
        pushButton_open_bracket->setFont(font2);
        pushButton_open_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_open_bracket, 3, 4, 1, 1);

        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy1.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy1);
        pushButton_mod->setMinimumSize(QSize(70, 70));
        pushButton_mod->setBaseSize(QSize(0, 0));
        pushButton_mod->setFont(font2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_mod, 4, 1, 1, 1);

        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy1.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy1);
        pushButton_div->setMinimumSize(QSize(70, 70));
        pushButton_div->setBaseSize(QSize(0, 0));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_div, 4, 3, 1, 1);

        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        sizePolicy1.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy1);
        pushButton_asin->setMinimumSize(QSize(70, 70));
        pushButton_asin->setBaseSize(QSize(0, 0));
        pushButton_asin->setFont(font2);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_asin, 6, 1, 1, 1);

        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        sizePolicy1.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy1);
        pushButton_acos->setMinimumSize(QSize(70, 70));
        pushButton_acos->setBaseSize(QSize(0, 0));
        pushButton_acos->setFont(font2);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_acos, 6, 2, 1, 1);

        pushButton_close_bracket = new QPushButton(centralwidget);
        pushButton_close_bracket->setObjectName(QString::fromUtf8("pushButton_close_bracket"));
        sizePolicy1.setHeightForWidth(pushButton_close_bracket->sizePolicy().hasHeightForWidth());
        pushButton_close_bracket->setSizePolicy(sizePolicy1);
        pushButton_close_bracket->setMinimumSize(QSize(70, 70));
        pushButton_close_bracket->setFont(font2);
        pushButton_close_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_close_bracket, 3, 5, 1, 1);

        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy1.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy1);
        pushButton_sqrt->setMinimumSize(QSize(70, 70));
        pushButton_sqrt->setBaseSize(QSize(0, 0));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_sqrt, 7, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(70, 70));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_5, 5, 5, 1, 1);

        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        sizePolicy1.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy1);
        pushButton_atan->setMinimumSize(QSize(70, 70));
        pushButton_atan->setBaseSize(QSize(0, 0));
        pushButton_atan->setFont(font2);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_atan, 6, 3, 1, 1);

        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        sizePolicy1.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy1);
        pushButton_mul->setMinimumSize(QSize(70, 70));
        pushButton_mul->setBaseSize(QSize(0, 0));
        pushButton_mul->setFont(font2);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_mul, 4, 2, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setMinimumSize(QSize(70, 70));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_1, 4, 4, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setMinimumSize(QSize(70, 70));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_0, 7, 5, 1, 1);

        pushButton_scale = new QPushButton(centralwidget);
        pushButton_scale->setObjectName(QString::fromUtf8("pushButton_scale"));
        sizePolicy1.setHeightForWidth(pushButton_scale->sizePolicy().hasHeightForWidth());
        pushButton_scale->setSizePolicy(sizePolicy1);
        pushButton_scale->setMinimumSize(QSize(70, 70));
        pushButton_scale->setBaseSize(QSize(0, 0));
        pushButton_scale->setFont(font2);
        pushButton_scale->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_scale, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(70, 70));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_7, 6, 4, 1, 1);

        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        sizePolicy1.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy1);
        pushButton_ln->setMinimumSize(QSize(70, 70));
        pushButton_ln->setBaseSize(QSize(0, 0));
        pushButton_ln->setFont(font2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_ln, 7, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(70, 70));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_9, 6, 6, 1, 1);

        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy1.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy1);
        pushButton_cos->setMinimumSize(QSize(70, 70));
        pushButton_cos->setBaseSize(QSize(0, 0));
        pushButton_cos->setFont(font2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_cos, 5, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(70, 70));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_6, 5, 6, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(70, 70));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_2, 4, 5, 1, 1);

        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        sizePolicy1.setHeightForWidth(pushButton_del->sizePolicy().hasHeightForWidth());
        pushButton_del->setSizePolicy(sizePolicy1);
        pushButton_del->setMinimumSize(QSize(70, 70));
        pushButton_del->setFont(font2);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(241, 241, 241);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_del, 3, 6, 1, 1);

        lineEdit_expression = new QLineEdit(centralwidget);
        lineEdit_expression->setObjectName(QString::fromUtf8("lineEdit_expression"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_expression->sizePolicy().hasHeightForWidth());
        lineEdit_expression->setSizePolicy(sizePolicy2);
        lineEdit_expression->setMinimumSize(QSize(200, 0));
        lineEdit_expression->setBaseSize(QSize(200, 100));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nimbus Sans [urw]"));
        font3.setPointSize(18);
        font3.setBold(true);
        lineEdit_expression->setFont(font3);
        lineEdit_expression->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"border: none;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: rgb(255, 255, 255);\n"
"padding: 5px;\n"
"}\n"
""));
        lineEdit_expression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_expression, 2, 1, 1, 6);

        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy1.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy1);
        pushButton_sin->setMinimumSize(QSize(70, 70));
        pushButton_sin->setBaseSize(QSize(0, 0));
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_sin, 5, 1, 1, 1);

        pushButton_eq = new QPushButton(centralwidget);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        sizePolicy1.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy1);
        pushButton_eq->setMinimumSize(QSize(70, 70));
        pushButton_eq->setFont(font1);
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: orange;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_eq, 7, 6, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy1.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy1);
        pushButton_dot->setMinimumSize(QSize(70, 70));
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_dot, 7, 4, 1, 1);

        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        sizePolicy1.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy1);
        pushButton_tan->setMinimumSize(QSize(70, 70));
        pushButton_tan->setBaseSize(QSize(0, 0));
        pushButton_tan->setFont(font2);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_tan, 5, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(70, 70));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_3, 4, 6, 1, 1);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy1.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy1);
        pushButton_minus->setMinimumSize(QSize(70, 70));
        pushButton_minus->setBaseSize(QSize(0, 0));
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_minus, 3, 3, 1, 1);

        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        sizePolicy1.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy1);
        pushButton_log->setMinimumSize(QSize(70, 70));
        pushButton_log->setBaseSize(QSize(0, 0));
        pushButton_log->setFont(font2);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_log, 7, 3, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(70, 70));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(241, 241, 241);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(200, 200, 200);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_8, 6, 5, 1, 1);

        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);
        pushButton_plus->setMinimumSize(QSize(70, 70));
        pushButton_plus->setBaseSize(QSize(0, 0));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_plus, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        sizePolicy1.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy1);
        pushButton_x->setMinimumSize(QSize(70, 70));
        pushButton_x->setFont(font2);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_x);

        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        sizePolicy1.setHeightForWidth(lineEdit_x->sizePolicy().hasHeightForWidth());
        lineEdit_x->setSizePolicy(sizePolicy1);
        lineEdit_x->setMinimumSize(QSize(140, 70));
        lineEdit_x->setMaximumSize(QSize(140, 70));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nimbus Sans [urw]"));
        font4.setPointSize(19);
        font4.setBold(false);
        lineEdit_x->setFont(font4);
        lineEdit_x->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
""));
        lineEdit_x->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_x);

        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        sizePolicy1.setHeightForWidth(pushButton_graph->sizePolicy().hasHeightForWidth());
        pushButton_graph->setSizePolicy(sizePolicy1);
        pushButton_graph->setMinimumSize(QSize(210, 70));
        pushButton_graph->setFont(font2);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 30px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_graph);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc v1.0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_open_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_close_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_scale->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        lineEdit_expression->setText(QString());
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        lineEdit_x->setText(QString());
        lineEdit_x->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter x", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "Function graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
