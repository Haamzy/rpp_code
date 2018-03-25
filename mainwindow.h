#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QVector>
#include <QList>
#include <QFile>
#include <QTableWidgetItem>

struct Person
{
    QString surname;
    QString firstname;
    QString contact;
    QString department;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_addButton_clicked();

    void on_saveButton_clicked();

    void on_deleteButton_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionNew_2_triggered();

    void on_actionSave_As_triggered();

    void on_actionClose_triggered();

    void on_table_itemClicked(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QList<QString> departments =
    {"Production","Research and Development",
     "Purchasing","Marketing","Human Resource Management",
     "Accounting and Finace"
    };

    QVector<Person> employees;
    QString myfile;
    int editing = -1;

    void loadtable();
    bool empty();
    void read_from_file(QString filename);
    void write_to_file(QString filename);
    void prepare_table();
    void clear_form();
    Person read_form();
};

#endif // MAINWINDOW_H
