/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_map;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_hello;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *cb_st;
    QLabel *label_4;
    QComboBox *cb_ed;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_findpath;
    QPushButton *btn_clear;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1300, 863);
        MainMenu->setMinimumSize(QSize(1300, 863));
        MainMenu->setMaximumSize(QSize(1300, 863));
        horizontalLayout_3 = new QHBoxLayout(MainMenu);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lb_map = new QLabel(MainMenu);
        lb_map->setObjectName(QStringLiteral("lb_map"));
        lb_map->setPixmap(QPixmap(QString::fromUtf8("../build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/\345\271\263\351\235\242\345\233\276.png")));
        lb_map->setScaledContents(true);

        horizontalLayout_2->addWidget(lb_map);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lb_hello = new QLabel(MainMenu);
        lb_hello->setObjectName(QStringLiteral("lb_hello"));

        verticalLayout_2->addWidget(lb_hello);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(MainMenu);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        cb_st = new QComboBox(MainMenu);
        cb_st->setObjectName(QStringLiteral("cb_st"));

        verticalLayout->addWidget(cb_st);

        label_4 = new QLabel(MainMenu);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        cb_ed = new QComboBox(MainMenu);
        cb_ed->setObjectName(QStringLiteral("cb_ed"));

        verticalLayout->addWidget(cb_ed);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_findpath = new QPushButton(MainMenu);
        btn_findpath->setObjectName(QStringLiteral("btn_findpath"));

        horizontalLayout->addWidget(btn_findpath);

        btn_clear = new QPushButton(MainMenu);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));

        horizontalLayout->addWidget(btn_clear);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 4);

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 9);
        horizontalLayout_2->setStretch(1, 1);

        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", Q_NULLPTR));
        lb_map->setText(QString());
        lb_hello->setText(QString());
        label_3->setText(QApplication::translate("MainMenu", "\350\265\267\347\202\271", Q_NULLPTR));
        cb_st->clear();
        cb_st->insertItems(0, QStringList()
         << QApplication::translate("MainMenu", "\344\270\234\345\214\272\346\225\231\345\255\246\346\245\274", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\347\224\265\345\255\220\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\350\245\277\345\256\211\351\202\256\347\224\265\345\244\247\345\255\246\345\237\272\345\273\272\345\244\204", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\350\245\277\345\256\211\351\202\256\347\224\265\345\244\247\345\255\246\351\225\277\345\256\211\346\240\241\345\214\272\345\256\266\345\261\236\351\231\242", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\351\225\277\346\200\235\345\205\254\345\257\223", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\351\225\277\346\231\272\345\205\254\345\257\223", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainMenu", "\347\273\210\347\202\271", Q_NULLPTR));
        cb_ed->clear();
        cb_ed->insertItems(0, QStringList()
         << QApplication::translate("MainMenu", "\344\270\234\345\214\272\346\225\231\345\255\246\346\245\274", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\351\225\277\346\231\272\345\205\254\345\257\223", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\351\225\277\346\200\235\345\205\254\345\257\223", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\350\245\277\345\256\211\351\202\256\347\224\265\345\244\247\345\255\246\351\225\277\345\256\211\346\240\241\345\214\272\345\256\266\345\261\236\351\231\242", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\350\245\277\345\256\211\351\202\256\347\224\265\345\244\247\345\255\246\345\237\272\345\273\272\345\244\204", Q_NULLPTR)
         << QApplication::translate("MainMenu", "\347\224\265\345\255\220\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
        );
        btn_findpath->setText(QApplication::translate("MainMenu", "\345\257\273\346\211\276\350\267\257\345\276\204", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("MainMenu", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
