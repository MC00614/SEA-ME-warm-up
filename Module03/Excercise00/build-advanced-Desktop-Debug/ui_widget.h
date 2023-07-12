/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *refreshButton;
    QPushButton *searchButton;
    QPushButton *addButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *addressText;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *phoneLine;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *emailLine;
    QLineEdit *nameLine;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *removeButton;
    QPushButton *cancelButton;
    QPushButton *bookmarkButton;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(913, 592);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(670, 30, 201, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(gridLayoutWidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        gridLayout->addWidget(refreshButton, 0, 0, 1, 1);

        searchButton = new QPushButton(gridLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setEnabled(false);

        gridLayout->addWidget(searchButton, 4, 0, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 29, 601, 291));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        addressText = new QTextEdit(gridLayoutWidget_2);
        addressText->setObjectName(QString::fromUtf8("addressText"));

        gridLayout_2->addWidget(addressText, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        phoneLine = new QLineEdit(gridLayoutWidget_2);
        phoneLine->setObjectName(QString::fromUtf8("phoneLine"));

        gridLayout_2->addWidget(phoneLine, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        emailLine = new QLineEdit(gridLayoutWidget_2);
        emailLine->setObjectName(QString::fromUtf8("emailLine"));

        gridLayout_2->addWidget(emailLine, 3, 1, 1, 1);

        nameLine = new QLineEdit(gridLayoutWidget_2);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout_2->addWidget(nameLine, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(Widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(670, 179, 201, 131));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        removeButton = new QPushButton(gridLayoutWidget_3);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);

        gridLayout_4->addWidget(removeButton, 0, 0, 1, 1);

        cancelButton = new QPushButton(gridLayoutWidget_3);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setEnabled(false);

        gridLayout_4->addWidget(cancelButton, 2, 0, 1, 1);

        bookmarkButton = new QPushButton(gridLayoutWidget_3);
        bookmarkButton->setObjectName(QString::fromUtf8("bookmarkButton"));
        bookmarkButton->setEnabled(false);

        gridLayout_4->addWidget(bookmarkButton, 1, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(Widget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(670, 350, 201, 101));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(gridLayoutWidget_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_5->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setEnabled(false);

        gridLayout_5->addWidget(pushButton_11, 1, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(Widget);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(670, 470, 201, 101));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(gridLayoutWidget_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setEnabled(false);

        gridLayout_6->addWidget(pushButton_12, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_6->addWidget(pushButton_13, 1, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(Widget);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(20, 330, 601, 241));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        tableWidget = new QTableWidget(gridLayoutWidget_6);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_7->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(Widget);
        QObject::connect(refreshButton, SIGNAL(clicked()), nameLine, SLOT(clear()));
        QObject::connect(refreshButton, SIGNAL(clicked()), phoneLine, SLOT(clear()));
        QObject::connect(refreshButton, SIGNAL(clicked()), emailLine, SLOT(clear()));
        QObject::connect(refreshButton, SIGNAL(clicked()), addressText, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        refreshButton->setText(QApplication::translate("Widget", "Refresh", nullptr));
        searchButton->setText(QApplication::translate("Widget", "Search", nullptr));
        addButton->setText(QApplication::translate("Widget", "Add", nullptr));
        label_4->setText(QApplication::translate("Widget", "Address", nullptr));
        label_3->setText(QApplication::translate("Widget", "Email", nullptr));
        label->setText(QApplication::translate("Widget", "Name", nullptr));
        label_2->setText(QApplication::translate("Widget", "Phone", nullptr));
        removeButton->setText(QApplication::translate("Widget", "Remove", nullptr));
        cancelButton->setText(QApplication::translate("Widget", "Cancel", nullptr));
        bookmarkButton->setText(QApplication::translate("Widget", "Add Favorite", nullptr));
        pushButton_10->setText(QApplication::translate("Widget", "See All", nullptr));
        pushButton_11->setText(QApplication::translate("Widget", "See Favorite", nullptr));
        pushButton_12->setText(QApplication::translate("Widget", "Save To File", nullptr));
        pushButton_13->setText(QApplication::translate("Widget", "Load From File", nullptr));
        label_5->setText(QApplication::translate("Widget", "Table", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
