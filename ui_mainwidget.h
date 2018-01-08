/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->setEnabled(true);
        MainWidget->resize(720, 1280);
        MainWidget->setMinimumSize(QSize(720, 1280));
        MainWidget->setMaximumSize(QSize(720, 1280));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/quant.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        label = new QLabel(MainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 390, 471, 81));
        QFont font;
        font.setFamily(QStringLiteral("Molot"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"     color: #4FF040;\n"
" }"));
        pushButton = new QPushButton(MainWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 540, 171, 221));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image: url(:/Images/finger.png)\n"
"}"));
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setCheckable(false);
        label_2 = new QLabel(MainWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 290, 601, 541));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"border-image: url(:/Images/giphy.png)\n"
"}"));
        label_3 = new QLabel(MainWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 720, 1280));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"border-image: url(:/Images/3.jpg)\n"
"}"));
        label_3->raise();
        label_2->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "\320\255\320\274\321\203\320\273\321\217\321\202\320\276\321\200 \320\272\320\262\320\260\320\275\321\202\320\276\320\262\321\213\321\205 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\271", 0));
        label->setText(QApplication::translate("MainWidget", "<html><head/><body><p>\320\222\321\213 \321\203\320\262\320\265\321\200\320\265\320\275\321\213 <span style=\" font-size:10pt; color:#ff0000;\">&lt;\320\243\320\241\320\242\320\240\320\236\320\231\320\241\320\242\320\222\320\236 \320\223\320\236\320\242\320\236\320\222\320\236&gt;</span><br/>\321\207\321\202\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \321\215\321\202\320\276 \320\267\320\275\320\260\321\202\321\214?</p></body></html>", 0));
        pushButton->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
