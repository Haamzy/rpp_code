/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainlayout;
    QHBoxLayout *horizontalLayout_8;
    QFrame *line_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *day;
    QLabel *date;
    QLabel *timedisplay;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_6;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *user_img;
    QLabel *loged_in_user;
    QPushButton *logoutBtn;
    QFrame *line_19;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Check_in_3;
    QLabel *free_rooms;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Check_in_4;
    QLabel *occupiedrooms;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Check_in;
    QLabel *checkin_value;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Check_in_2;
    QLabel *checkout_value;
    QLabel *Hotel_img;
    QFrame *line_3;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Sublayout_1;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_8;
    QTableWidget *employeesTable;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *delete_worker;
    QPushButton *edit_worker;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *emp_image;
    QLabel *label_2;
    QLineEdit *emp_userid;
    QLineEdit *emp_password;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_11;
    QLineEdit *emp_lastName;
    QLabel *label_12;
    QLineEdit *emp_firstName;
    QLabel *label_13;
    QLineEdit *emp_PassportNo;
    QLabel *label_14;
    QLineEdit *emp_address;
    QLabel *label_15;
    QLineEdit *emp_mail;
    QLabel *label_16;
    QLineEdit *emp_contact;
    QLabel *label;
    QComboBox *emp_position;
    QPushButton *save_emp_data;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(1469, 1037);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdminWindow->setWindowIcon(icon);
        AdminWindow->setStyleSheet(QStringLiteral("background: #ff9345;"));
        verticalLayoutWidget = new QWidget(AdminWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1451, 1011));
        mainlayout = new QVBoxLayout(verticalLayoutWidget);
        mainlayout->setSpacing(10);
        mainlayout->setObjectName(QStringLiteral("mainlayout"));
        mainlayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        line_7 = new QFrame(verticalLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_7);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(80, 80));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        label_6->setScaledContents(true);

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        day = new QLabel(verticalLayoutWidget);
        day->setObjectName(QStringLiteral("day"));
        QFont font;
        font.setPointSize(9);
        day->setFont(font);
        day->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(day);

        date = new QLabel(verticalLayoutWidget);
        date->setObjectName(QStringLiteral("date"));
        QFont font1;
        font1.setPointSize(10);
        date->setFont(font1);
        date->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(date);


        horizontalLayout_8->addLayout(verticalLayout_4);

        timedisplay = new QLabel(verticalLayoutWidget);
        timedisplay->setObjectName(QStringLiteral("timedisplay"));
        QFont font2;
        font2.setPointSize(18);
        timedisplay->setFont(font2);

        horizontalLayout_8->addWidget(timedisplay);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        line_6 = new QFrame(verticalLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_6);


        mainlayout->addLayout(horizontalLayout_8);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        mainlayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        user_img = new QLabel(verticalLayoutWidget);
        user_img->setObjectName(QStringLiteral("user_img"));
        user_img->setMaximumSize(QSize(200, 200));
        user_img->setPixmap(QPixmap(QString::fromUtf8(":/images/imgicon.jpg")));
        user_img->setScaledContents(true);
        user_img->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(user_img);


        verticalLayout_5->addLayout(horizontalLayout);

        loged_in_user = new QLabel(verticalLayoutWidget);
        loged_in_user->setObjectName(QStringLiteral("loged_in_user"));
        loged_in_user->setMaximumSize(QSize(16777215, 25));
        loged_in_user->setFont(font1);
        loged_in_user->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(loged_in_user);

        logoutBtn = new QPushButton(verticalLayoutWidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        logoutBtn->setMaximumSize(QSize(16777215, 16777215));
        logoutBtn->setFont(font1);
        logoutBtn->setStyleSheet(QStringLiteral("background: #3eff71;"));

        verticalLayout_5->addWidget(logoutBtn);

        line_19 = new QFrame(verticalLayoutWidget);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_19);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Check_in_3 = new QLabel(verticalLayoutWidget);
        Check_in_3->setObjectName(QStringLiteral("Check_in_3"));
        Check_in_3->setFont(font1);

        horizontalLayout_6->addWidget(Check_in_3);

        free_rooms = new QLabel(verticalLayoutWidget);
        free_rooms->setObjectName(QStringLiteral("free_rooms"));
        free_rooms->setFont(font);

        horizontalLayout_6->addWidget(free_rooms);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Check_in_4 = new QLabel(verticalLayoutWidget);
        Check_in_4->setObjectName(QStringLiteral("Check_in_4"));
        Check_in_4->setFont(font1);

        horizontalLayout_7->addWidget(Check_in_4);

        occupiedrooms = new QLabel(verticalLayoutWidget);
        occupiedrooms->setObjectName(QStringLiteral("occupiedrooms"));
        occupiedrooms->setFont(font);

        horizontalLayout_7->addWidget(occupiedrooms);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Check_in = new QLabel(verticalLayoutWidget);
        Check_in->setObjectName(QStringLiteral("Check_in"));
        Check_in->setFont(font1);

        horizontalLayout_4->addWidget(Check_in);

        checkin_value = new QLabel(verticalLayoutWidget);
        checkin_value->setObjectName(QStringLiteral("checkin_value"));
        checkin_value->setFont(font);

        horizontalLayout_4->addWidget(checkin_value);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Check_in_2 = new QLabel(verticalLayoutWidget);
        Check_in_2->setObjectName(QStringLiteral("Check_in_2"));
        Check_in_2->setFont(font1);

        horizontalLayout_5->addWidget(Check_in_2);

        checkout_value = new QLabel(verticalLayoutWidget);
        checkout_value->setObjectName(QStringLiteral("checkout_value"));
        checkout_value->setFont(font);

        horizontalLayout_5->addWidget(checkout_value);


        verticalLayout->addLayout(horizontalLayout_5);

        Hotel_img = new QLabel(verticalLayoutWidget);
        Hotel_img->setObjectName(QStringLiteral("Hotel_img"));
        Hotel_img->setMaximumSize(QSize(280, 337));
        Hotel_img->setPixmap(QPixmap(QString::fromUtf8(":/images/hotelimg.jpg")));
        Hotel_img->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Hotel_img);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_5);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);


        horizontalLayout_3->addLayout(verticalLayout_3);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayoutWidget_3 = new QWidget(tab_4);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 10, 1091, 771));
        Sublayout_1 = new QVBoxLayout(verticalLayoutWidget_3);
        Sublayout_1->setSpacing(10);
        Sublayout_1->setObjectName(QStringLiteral("Sublayout_1"));
        Sublayout_1->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background: #45b8ff;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(14, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QStringLiteral("background: white;"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("background: #3eff71;\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        Sublayout_1->addWidget(widget);

        line_8 = new QFrame(verticalLayoutWidget_3);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        Sublayout_1->addWidget(line_8);

        employeesTable = new QTableWidget(verticalLayoutWidget_3);
        employeesTable->setObjectName(QStringLiteral("employeesTable"));
        employeesTable->setFont(font1);
        employeesTable->setStyleSheet(QStringLiteral("background:white"));

        Sublayout_1->addWidget(employeesTable);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        delete_worker = new QPushButton(verticalLayoutWidget_3);
        delete_worker->setObjectName(QStringLiteral("delete_worker"));
        delete_worker->setStyleSheet(QLatin1String("background: #3eff71;\n"
""));

        horizontalLayout_19->addWidget(delete_worker);

        edit_worker = new QPushButton(verticalLayoutWidget_3);
        edit_worker->setObjectName(QStringLiteral("edit_worker"));
        edit_worker->setFont(font);
        edit_worker->setStyleSheet(QStringLiteral("background: #3eff71;"));

        horizontalLayout_19->addWidget(edit_worker);


        Sublayout_1->addLayout(horizontalLayout_19);

        line_9 = new QFrame(verticalLayoutWidget_3);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        Sublayout_1->addWidget(line_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        emp_image = new QLabel(verticalLayoutWidget_3);
        emp_image->setObjectName(QStringLiteral("emp_image"));
        emp_image->setMaximumSize(QSize(250, 250));
        emp_image->setFrameShape(QFrame::StyledPanel);
        emp_image->setLineWidth(3);
        emp_image->setPixmap(QPixmap(QString::fromUtf8(":/images/imgicon.jpg")));
        emp_image->setScaledContents(true);

        horizontalLayout_10->addWidget(emp_image);


        verticalLayout_7->addLayout(horizontalLayout_10);

        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 58));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("background: #3eff71;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        emp_userid = new QLineEdit(verticalLayoutWidget_3);
        emp_userid->setObjectName(QStringLiteral("emp_userid"));
        emp_userid->setMaximumSize(QSize(350, 16777215));
        emp_userid->setFont(font1);
        emp_userid->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_7->addWidget(emp_userid);

        emp_password = new QLineEdit(verticalLayoutWidget_3);
        emp_password->setObjectName(QStringLiteral("emp_password"));
        emp_password->setMaximumSize(QSize(350, 16777215));
        emp_password->setFont(font1);
        emp_password->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_7->addWidget(emp_password);


        horizontalLayout_11->addLayout(verticalLayout_7);

        horizontalSpacer_7 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(16777215, 20));
        label_11->setFont(font);

        verticalLayout_8->addWidget(label_11);

        emp_lastName = new QLineEdit(verticalLayoutWidget_3);
        emp_lastName->setObjectName(QStringLiteral("emp_lastName"));
        emp_lastName->setFont(font1);
        emp_lastName->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_lastName);

        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        verticalLayout_8->addWidget(label_12);

        emp_firstName = new QLineEdit(verticalLayoutWidget_3);
        emp_firstName->setObjectName(QStringLiteral("emp_firstName"));
        emp_firstName->setFont(font1);
        emp_firstName->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_firstName);

        label_13 = new QLabel(verticalLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        verticalLayout_8->addWidget(label_13);

        emp_PassportNo = new QLineEdit(verticalLayoutWidget_3);
        emp_PassportNo->setObjectName(QStringLiteral("emp_PassportNo"));
        emp_PassportNo->setFont(font1);
        emp_PassportNo->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_PassportNo);

        label_14 = new QLabel(verticalLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        verticalLayout_8->addWidget(label_14);

        emp_address = new QLineEdit(verticalLayoutWidget_3);
        emp_address->setObjectName(QStringLiteral("emp_address"));
        emp_address->setFont(font1);
        emp_address->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_address);

        label_15 = new QLabel(verticalLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        verticalLayout_8->addWidget(label_15);

        emp_mail = new QLineEdit(verticalLayoutWidget_3);
        emp_mail->setObjectName(QStringLiteral("emp_mail"));
        emp_mail->setFont(font1);
        emp_mail->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_mail);

        label_16 = new QLabel(verticalLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);

        verticalLayout_8->addWidget(label_16);

        emp_contact = new QLineEdit(verticalLayoutWidget_3);
        emp_contact->setObjectName(QStringLiteral("emp_contact"));
        emp_contact->setFont(font1);
        emp_contact->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_8->addWidget(emp_contact);

        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_8->addWidget(label);

        emp_position = new QComboBox(verticalLayoutWidget_3);
        emp_position->setObjectName(QStringLiteral("emp_position"));
        emp_position->setFont(font1);
        emp_position->setStyleSheet(QStringLiteral("background:white"));

        verticalLayout_8->addWidget(emp_position);


        horizontalLayout_11->addLayout(verticalLayout_8);


        Sublayout_1->addLayout(horizontalLayout_11);

        save_emp_data = new QPushButton(verticalLayoutWidget_3);
        save_emp_data->setObjectName(QStringLiteral("save_emp_data"));
        save_emp_data->setFont(font);
        save_emp_data->setStyleSheet(QStringLiteral("background: #3eff71;"));

        Sublayout_1->addWidget(save_emp_data);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_3->addWidget(tabWidget);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_5);


        mainlayout->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMaximumSize(QSize(70, 70));
        label_19->setFont(font);
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        label_19->setScaledContents(true);

        horizontalLayout_12->addWidget(label_19);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(16777215, 100));
        label_18->setFont(font);

        horizontalLayout_12->addWidget(label_18);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        mainlayout->addLayout(horizontalLayout_12);


        retranslateUi(AdminWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QWidget *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Administrator", Q_NULLPTR));
        label_6->setText(QString());
        day->setText(QApplication::translate("AdminWindow", "Day Of the Week", Q_NULLPTR));
        date->setText(QApplication::translate("AdminWindow", "Date ", Q_NULLPTR));
        timedisplay->setText(QApplication::translate("AdminWindow", "Time acordingly", Q_NULLPTR));
        user_img->setText(QString());
        loged_in_user->setText(QApplication::translate("AdminWindow", "users name", Q_NULLPTR));
        logoutBtn->setText(QApplication::translate("AdminWindow", "Sign out", Q_NULLPTR));
        Check_in_3->setText(QApplication::translate("AdminWindow", "Free rooms:", Q_NULLPTR));
        free_rooms->setText(QApplication::translate("AdminWindow", "40", Q_NULLPTR));
        Check_in_4->setText(QApplication::translate("AdminWindow", "occupied Rooms", Q_NULLPTR));
        occupiedrooms->setText(QApplication::translate("AdminWindow", "13", Q_NULLPTR));
        Check_in->setText(QApplication::translate("AdminWindow", "Check in:", Q_NULLPTR));
        checkin_value->setText(QApplication::translate("AdminWindow", "5", Q_NULLPTR));
        Check_in_2->setText(QApplication::translate("AdminWindow", "Check out:", Q_NULLPTR));
        checkout_value->setText(QApplication::translate("AdminWindow", "2", Q_NULLPTR));
        Hotel_img->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("AdminWindow", "Search ID", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminWindow", "PushButton", Q_NULLPTR));
        delete_worker->setText(QApplication::translate("AdminWindow", "Delete Data", Q_NULLPTR));
        edit_worker->setText(QApplication::translate("AdminWindow", "Edit Data", Q_NULLPTR));
        emp_image->setText(QString());
        label_2->setText(QApplication::translate("AdminWindow", "Comapny Employee", Q_NULLPTR));
        emp_userid->setPlaceholderText(QApplication::translate("AdminWindow", "User ID", Q_NULLPTR));
        emp_password->setPlaceholderText(QApplication::translate("AdminWindow", "Password", Q_NULLPTR));
        label_11->setText(QApplication::translate("AdminWindow", "Last Name :", Q_NULLPTR));
        emp_lastName->setPlaceholderText(QApplication::translate("AdminWindow", "Last Name", Q_NULLPTR));
        label_12->setText(QApplication::translate("AdminWindow", "First name :", Q_NULLPTR));
        emp_firstName->setPlaceholderText(QApplication::translate("AdminWindow", "First Name", Q_NULLPTR));
        label_13->setText(QApplication::translate("AdminWindow", "Passport No :", Q_NULLPTR));
        emp_PassportNo->setPlaceholderText(QApplication::translate("AdminWindow", "Passport No", Q_NULLPTR));
        label_14->setText(QApplication::translate("AdminWindow", "Residential Address :", Q_NULLPTR));
        emp_address->setPlaceholderText(QApplication::translate("AdminWindow", "Address", Q_NULLPTR));
        label_15->setText(QApplication::translate("AdminWindow", "Email :", Q_NULLPTR));
        emp_mail->setPlaceholderText(QApplication::translate("AdminWindow", "example@mail.com", Q_NULLPTR));
        label_16->setText(QApplication::translate("AdminWindow", "Contact No :", Q_NULLPTR));
        emp_contact->setPlaceholderText(QApplication::translate("AdminWindow", "+7 924 125 45 62", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Position :", Q_NULLPTR));
        save_emp_data->setText(QApplication::translate("AdminWindow", "Save", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AdminWindow", "Cashier Data", Q_NULLPTR));
        label_19->setText(QString());
        label_18->setText(QApplication::translate("AdminWindow", "JH Hotel \n"
"P.O Box 3453 \n"
"www.jhhote.com", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
