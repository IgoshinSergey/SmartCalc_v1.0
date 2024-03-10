/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *customPlot;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_max_x;
    QDoubleSpinBox *doubleSpinBox_min_y;
    QDoubleSpinBox *doubleSpinBox_max_y;
    QDoubleSpinBox *doubleSpinBox_min_x;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox_step;

    void setupUi(QDialog *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(620, 630);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Graph->sizePolicy().hasHeightForWidth());
        Graph->setSizePolicy(sizePolicy);
        Graph->setMinimumSize(QSize(0, 0));
        Graph->setMaximumSize(QSize(620, 630));
        Graph->setStyleSheet(QString::fromUtf8("background: rgb(100, 100, 100)"));
        verticalLayout = new QVBoxLayout(Graph);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        customPlot = new QCustomPlot(Graph);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setEnabled(false);
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);
        customPlot->setMinimumSize(QSize(600, 500));

        verticalLayout->addWidget(customPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doubleSpinBox_max_x = new QDoubleSpinBox(Graph);
        doubleSpinBox_max_x->setObjectName(QString::fromUtf8("doubleSpinBox_max_x"));
        sizePolicy.setHeightForWidth(doubleSpinBox_max_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_max_x->setSizePolicy(sizePolicy);
        doubleSpinBox_max_x->setMinimumSize(QSize(140, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Nimbus Sans [urw]"));
        font.setPointSize(16);
        font.setBold(true);
        doubleSpinBox_max_x->setFont(font);
        doubleSpinBox_max_x->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color: black;\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"QDoubleSpinBox::up-arrow {\n"
"background : gray;\n"
"}\n"
"QDoubleSpinBox::down-arrow {\n"
"background : gray;\n"
"}\n"
""));
        doubleSpinBox_max_x->setMinimum(-100.000000000000000);
        doubleSpinBox_max_x->setMaximum(100.000000000000000);
        doubleSpinBox_max_x->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_max_x, 0, 2, 1, 1);

        doubleSpinBox_min_y = new QDoubleSpinBox(Graph);
        doubleSpinBox_min_y->setObjectName(QString::fromUtf8("doubleSpinBox_min_y"));
        sizePolicy.setHeightForWidth(doubleSpinBox_min_y->sizePolicy().hasHeightForWidth());
        doubleSpinBox_min_y->setSizePolicy(sizePolicy);
        doubleSpinBox_min_y->setMinimumSize(QSize(140, 40));
        doubleSpinBox_min_y->setFont(font);
        doubleSpinBox_min_y->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color: black;\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"QDoubleSpinBox::up-arrow {\n"
"background : gray;\n"
"}\n"
"QDoubleSpinBox::down-arrow {\n"
"background : gray;\n"
"}\n"
""));
        doubleSpinBox_min_y->setMinimum(-100.000000000000000);
        doubleSpinBox_min_y->setMaximum(100.000000000000000);
        doubleSpinBox_min_y->setValue(-10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_min_y, 1, 1, 1, 1);

        doubleSpinBox_max_y = new QDoubleSpinBox(Graph);
        doubleSpinBox_max_y->setObjectName(QString::fromUtf8("doubleSpinBox_max_y"));
        sizePolicy.setHeightForWidth(doubleSpinBox_max_y->sizePolicy().hasHeightForWidth());
        doubleSpinBox_max_y->setSizePolicy(sizePolicy);
        doubleSpinBox_max_y->setMinimumSize(QSize(140, 40));
        doubleSpinBox_max_y->setFont(font);
        doubleSpinBox_max_y->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color: black;\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"QDoubleSpinBox::up-arrow {\n"
"background : gray;\n"
"}\n"
"QDoubleSpinBox::down-arrow {\n"
"background : gray;\n"
"}\n"
""));
        doubleSpinBox_max_y->setMinimum(-100.000000000000000);
        doubleSpinBox_max_y->setMaximum(100.000000000000000);
        doubleSpinBox_max_y->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_max_y, 1, 2, 1, 1);

        doubleSpinBox_min_x = new QDoubleSpinBox(Graph);
        doubleSpinBox_min_x->setObjectName(QString::fromUtf8("doubleSpinBox_min_x"));
        sizePolicy.setHeightForWidth(doubleSpinBox_min_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_min_x->setSizePolicy(sizePolicy);
        doubleSpinBox_min_x->setMinimumSize(QSize(140, 40));
        doubleSpinBox_min_x->setFont(font);
        doubleSpinBox_min_x->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color: black;\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"QDoubleSpinBox::up-arrow {\n"
"background : gray;\n"
"}\n"
"QDoubleSpinBox::down-arrow {\n"
"background : gray;\n"
"}\n"
""));
        doubleSpinBox_min_x->setDecimals(2);
        doubleSpinBox_min_x->setMinimum(-100.000000000000000);
        doubleSpinBox_min_x->setMaximum(100.000000000000000);
        doubleSpinBox_min_x->setValue(-10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_min_x, 0, 1, 1, 1);

        pushButton = new QPushButton(Graph);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(155, 40));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"border: none;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgb(223, 223, 0);\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        doubleSpinBox_step = new QDoubleSpinBox(Graph);
        doubleSpinBox_step->setObjectName(QString::fromUtf8("doubleSpinBox_step"));
        sizePolicy.setHeightForWidth(doubleSpinBox_step->sizePolicy().hasHeightForWidth());
        doubleSpinBox_step->setSizePolicy(sizePolicy);
        doubleSpinBox_step->setMinimumSize(QSize(140, 40));
        doubleSpinBox_step->setFont(font);
        doubleSpinBox_step->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"color: black;\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"border-style: outset;\n"
"background: rgb(200, 200, 200);\n"
"padding: 5px;\n"
"}\n"
"QDoubleSpinBox::up-arrow {\n"
"background : gray;\n"
"}\n"
"QDoubleSpinBox::down-arrow {\n"
"background : gray;\n"
"}\n"
""));
        doubleSpinBox_step->setDecimals(2);
        doubleSpinBox_step->setMinimum(0.010000000000000);
        doubleSpinBox_step->setMaximum(10.000000000000000);
        doubleSpinBox_step->setSingleStep(0.100000000000000);
        doubleSpinBox_step->setValue(0.050000000000000);

        gridLayout->addWidget(doubleSpinBox_step, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QDialog *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        doubleSpinBox_max_x->setPrefix(QCoreApplication::translate("Graph", "max x = ", nullptr));
        doubleSpinBox_min_y->setPrefix(QCoreApplication::translate("Graph", "min y = ", nullptr));
        doubleSpinBox_max_y->setPrefix(QCoreApplication::translate("Graph", "max y = ", nullptr));
        doubleSpinBox_min_x->setPrefix(QCoreApplication::translate("Graph", "min x = ", nullptr));
        doubleSpinBox_min_x->setSuffix(QString());
        pushButton->setText(QCoreApplication::translate("Graph", "Tracing", nullptr));
        doubleSpinBox_step->setPrefix(QCoreApplication::translate("Graph", "step = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
