/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QFrame *frame_2;
    QPushButton *cancelButton;
    QLineEdit *password;
    QLineEdit *user_id;
    QRadioButton *cashier;
    QLabel *message;
    QRadioButton *admin;
    QLabel *logo;
    QPushButton *login;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(900, 528);
        QFont font;
        font.setPointSize(10);
        Login->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setAutoFillBackground(true);
        Login->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(Login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 901, 531));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/images/login_bg.jpg)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 10, 381, 521));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QLatin1String("background-image:url(:/images/wood.jpg);\n"
"opacity: 0.5;"));
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 20, 361, 481));
        frame_2->setStyleSheet(QLatin1String("background: url(:/image/wood.jpg);\n"
"opacity: 50%;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        cancelButton = new QPushButton(frame_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(0, 450, 361, 28));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QStringLiteral("background: #1cc766"));
        password = new QLineEdit(frame_2);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(0, 290, 361, 31));
        password->setFont(font);
        password->setStyleSheet(QStringLiteral("background: white"));
        password->setMaxLength(100);
        password->setEchoMode(QLineEdit::Password);
        password->setAlignment(Qt::AlignCenter);
        password->setReadOnly(false);
        user_id = new QLineEdit(frame_2);
        user_id->setObjectName(QStringLiteral("user_id"));
        user_id->setGeometry(QRect(0, 240, 361, 31));
        user_id->setFont(font);
        user_id->setStyleSheet(QLatin1String("background: white;\n"
""));
        user_id->setMaxLength(100);
        user_id->setFrame(true);
        user_id->setAlignment(Qt::AlignCenter);
        user_id->setReadOnly(false);
        cashier = new QRadioButton(frame_2);
        cashier->setObjectName(QStringLiteral("cashier"));
        cashier->setGeometry(QRect(20, 350, 171, 20));
        cashier->setFont(font);
        message = new QLabel(frame_2);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(0, 190, 361, 41));
        QFont font1;
        font1.setPointSize(12);
        message->setFont(font1);
        message->setStyleSheet(QStringLiteral("background-image: uri(:/images/wood.jpg); "));
        message->setAlignment(Qt::AlignCenter);
        admin = new QRadioButton(frame_2);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setGeometry(QRect(230, 350, 131, 20));
        admin->setFont(font);
        logo = new QLabel(frame_2);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(120, 0, 121, 121));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);
        login = new QPushButton(frame_2);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(0, 390, 361, 31));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QStringLiteral("background: #1cc766"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "JH Hotel Login", Q_NULLPTR));
        groupBox->setTitle(QString());
        cancelButton->setText(QApplication::translate("Login", "Cancel", Q_NULLPTR));
        password->setInputMask(QString());
        password->setPlaceholderText(QApplication::translate("Login", "Password", Q_NULLPTR));
        user_id->setPlaceholderText(QApplication::translate("Login", "ID Number", Q_NULLPTR));
        cashier->setText(QApplication::translate("Login", "As Receptionist", Q_NULLPTR));
        message->setText(QApplication::translate("Login", "Sign in", Q_NULLPTR));
        admin->setText(QApplication::translate("Login", "As Admin", Q_NULLPTR));
        logo->setText(QString());
        login->setText(QApplication::translate("Login", "Sign in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
