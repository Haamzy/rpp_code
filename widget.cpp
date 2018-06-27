#include "widget.h"
#include "ui_widget.h"
#include <QAbstractTableModel>
#include <QFile>
#include <QTextStream>
#include <QVariant>
#include <QFileDialog>
using std :: iterator;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

int myTableModel::rowCount(const QModelIndex &parent) const
{
    return vec.size();
}
int myTableModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}
QVariant myTableModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (index.column() == 0)
        {
            QString answer = vec[index.row()].surname;
            return QVariant(answer);
        }
        if (index.column() == 1)
        {
            QString answer = vec[index.row()].firstname;
            return QVariant(answer);
        }
        if (index.column() == 2)
        {
            QString answer = vec[index.row()].contact;
            return QVariant(answer);
        }
        if (index.column() == 3)
        {
            QString answer = vec[index.row()].department;
            return QVariant(answer);
        }
    }
    return QVariant();
}
QVariant myTableModel::headerData(int section, Qt::Orientation orientation, int
                                                                    role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();
    if (orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return QVariant(QString::fromUtf8("Surname"));
        case 1:
            return QVariant(QString::fromUtf8("Firstname"));
        case 2:
            return QVariant(QString::fromUtf8("Contact"));
        case 3:
            return QVariant(QString::fromUtf8("Department"));
        default:
            return QVariant();
        }
    }
    return QVariant();
}

void Widget::show_table(QVector <Person> vec)
{
    myTableModel *myModel = new myTableModel(vec);
    ui->tableView->setModel(myModel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_upload_clicked(bool checked)
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("load file"),
                                                      "",tr("file (*.txt)"));
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly))
         {
             QTextStream fin (&file);
             while (!fin.atEnd())
             {
                 Person new_el;
                 fin >> new_el.surname >> new_el.firstname >> new_el.contact >>
                                                         new_el.department;
                 vec.push_back(new_el);
             }
         }
         file.close();
         show_table(vec);
}

void Widget::on_save_clicked(bool checked)
{
    QFile file ("Film Actors.txt");
    QTextStream fout (&file);
    QVector <Person> :: iterator it;
    if (file.open(QIODevice::WriteOnly))
    {
        for (it = vec.begin(); it < vec.end(); it++)
        {
            fout << (*it).surname << " " << (*it).firstname << " " << (*it).contact << " " <<(*it).department << " ";
        }
    }
    file.close();
}

void Widget::on_delete_2_clicked(bool checked)
{
    if (ui->tableView->currentIndex().row() >= 0)
    {
        vec.removeAt(ui->tableView->currentIndex().row());
    }
    show_table(vec);
}

void Widget::on_add_clicked(bool checked)
{
    Person new_el;
    new_el.surname = ui->surname_2->text();
    new_el.firstname = ui->firstname_2->text();
    new_el.contact = ui->contact->text();
    new_el.department = ui->department->currentText();
    vec.push_back(new_el);
    show_table(vec);
}
