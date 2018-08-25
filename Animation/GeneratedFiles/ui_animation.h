/********************************************************************************
** Form generated from reading UI file 'animation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATION_H
#define UI_ANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_x;
    QLabel *label_y;
    QLabel *label_s;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AnimationClass)
    {
        if (AnimationClass->objectName().isEmpty())
            AnimationClass->setObjectName(QStringLiteral("AnimationClass"));
        AnimationClass->resize(1147, 531);
        centralWidget = new QWidget(AnimationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(961, 11, 161, 134));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_x = new QLabel(layoutWidget);
        label_x->setObjectName(QStringLiteral("label_x"));
        label_x->setFont(font);

        verticalLayout_2->addWidget(label_x);

        label_y = new QLabel(layoutWidget);
        label_y->setObjectName(QStringLiteral("label_y"));
        label_y->setFont(font);

        verticalLayout_2->addWidget(label_y);

        label_s = new QLabel(layoutWidget);
        label_s->setObjectName(QStringLiteral("label_s"));
        label_s->setFont(font);

        verticalLayout_2->addWidget(label_s);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        AnimationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AnimationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1147, 23));
        AnimationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AnimationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AnimationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AnimationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AnimationClass->setStatusBar(statusBar);

        retranslateUi(AnimationClass);

        QMetaObject::connectSlotsByName(AnimationClass);
    } // setupUi

    void retranslateUi(QMainWindow *AnimationClass)
    {
        AnimationClass->setWindowTitle(QApplication::translate("AnimationClass", "Animation", Q_NULLPTR));
        label->setText(QApplication::translate("AnimationClass", "X = ", Q_NULLPTR));
        label_2->setText(QApplication::translate("AnimationClass", "Y = ", Q_NULLPTR));
        label_3->setText(QApplication::translate("AnimationClass", "S = ", Q_NULLPTR));
        label_4->setText(QApplication::translate("AnimationClass", "S = ", Q_NULLPTR));
        label_x->setText(QApplication::translate("AnimationClass", "0", Q_NULLPTR));
        label_y->setText(QApplication::translate("AnimationClass", "0", Q_NULLPTR));
        label_s->setText(QApplication::translate("AnimationClass", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("AnimationClass", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationClass: public Ui_AnimationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATION_H
