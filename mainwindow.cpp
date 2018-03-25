#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->setColumnCount(4);
    prepare_table();
    ui->department->addItems(departments);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::prepare_table()
{
    QStringList headers;
    headers << "Surname" << "First Name" << "Contact" << "Department";
    ui->table->setHorizontalHeaderLabels(headers);
}
void MainWindow::loadtable()
{
    int size = employees.size();
    for(int i=0;i<size;i++)
    {
        QTableWidgetItem* item_0 = new QTableWidgetItem();
        item_0->setTextAlignment(Qt::AlignCenter);
        item_0->setText(employees.at(i).surname);
        ui->table->setItem(i,0,item_0);

        QTableWidgetItem* item_1 = new QTableWidgetItem();
        item_1->setTextAlignment(Qt::AlignCenter);
        item_1->setText(employees.at(i).firstname);
        ui->table->setItem(i,1,item_1);

        QTableWidgetItem* item_2 = new QTableWidgetItem();
        item_2->setTextAlignment(Qt::AlignCenter);
        item_2->setText(employees.at(i).contact);
        ui->table->setItem(i,2,item_2);

        QTableWidgetItem* item_3 = new QTableWidgetItem();
        item_3->setTextAlignment(Qt::AlignCenter);
        item_3->setText(employees.at(i).department);
        ui->table->setItem(i,3,item_3);
    }
}

void MainWindow::write_to_file(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        ui->filename->setText("File not saved");
    }else
    {
        QTextStream out(&file);

        int size = employees.size();
        for(int index=0;index<size;index++)
        {
            out << employees.at(index).surname << "," << employees.at(index).firstname << "," << employees.at(index).contact
                << "," << employees.at(index).department << "\n";
        }
    }
}

void MainWindow::read_from_file(QString filename)
{
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        ui->filename->setText("File can not open");
    }else
    {
        QTextStream input(&file);
        Person worker;

        while(!input.atEnd())
        {
            QString details = input.readLine();
            QList<QString> read = details.split(",");

            worker.surname = read.at(0);
            worker.firstname = read.at(1);
            worker.contact = read.at(2);
            worker.department = read.at(3);

            employees.push_back(worker);
        }
    }
}
bool MainWindow::empty()
{
    if(ui->firstname_2->text() == "" || ui->surname_2->text() == "" || ui->contact->text() == "")
    {
        return true;
    }else
    {
        return false;
    }
}

void MainWindow::clear_form()
{
    ui->surname_2->setText("");
    ui->firstname_2->setText("");
    ui->contact->setText("");
}

void MainWindow::on_addButton_clicked()
{
    editing =-1;
    int rowcount = employees.size();
    ui->table->setRowCount(rowcount+1);
    loadtable();
    clear_form();
}

Person MainWindow::read_form()
{
    Person employe;

    employe.surname = ui->surname_2->text();
    employe.firstname = ui->firstname_2->text();
    employe.department = ui->department->currentText();
    employe.contact = ui->contact->text();

    return employe;
}

void MainWindow::on_saveButton_clicked()
{
    if(empty() == false && editing == -1)
    {
        employees.push_back(read_form());
        ui->table->setRowCount(employees.size());
        loadtable();
        clear_form();
    }else if(empty()== false && editing != -1)
    {
        employees.replace(editing,read_form());
        ui->table->setRowCount(employees.size());
        loadtable();
    }else
    {
        QMessageBox::information(this,"Add New Record","Please fill in the form to add a new record.");
    }
}

void MainWindow::on_deleteButton_clicked()
{
    try{
        int index = ui->table->currentRow();
        if(index == -1)
        {
            throw 0;
        }else
        {
            employees.removeAt(index);
            ui->table->setRowCount(employees.size());
            loadtable();
            clear_form();
            editing = -1;

        }
    }
    catch(...)
    {
        QMessageBox::warning(this,"Delete Record","No record was selected to be deleted.");
    }
}

void MainWindow::on_actionOpen_triggered()
{
    myfile.clear();
    employees.clear();
    ui->table->clear();
    prepare_table();

    myfile = QFileDialog::getOpenFileName(this,tr("Save Address Book"),"",tr("Address Book(*.txt);;All Files (*)"));
    if(myfile.isEmpty())
        return;
    else
    {
        read_from_file(myfile);
        ui->table->setRowCount(employees.size());
        ui->filename->setText(myfile);
        loadtable();
    }
}

void MainWindow::on_actionSave_triggered()
{
    if(myfile.isEmpty())
        on_actionSave_As_triggered();
    else
        write_to_file(myfile);
}

void MainWindow::on_actionNew_2_triggered()
{
    myfile = QFileDialog::getSaveFileName(this,tr("Open Address Book"),"",tr("Text Documents(*.txt);;All Files (*)"));
    ui->filename->setText(myfile);
    employees.clear();
    ui->table->clear();
    prepare_table();
}

void MainWindow::on_actionSave_As_triggered()
{
    myfile = QFileDialog::getSaveFileName(this,tr("Open Address Book"),"",tr("Text Documents(*.txt);;All Files (*)"));
    if(myfile.isEmpty())
        return;
    else {
        ui->filename->setText(myfile);
        write_to_file(myfile);
    }

}

void MainWindow::on_actionClose_triggered()
{
    employees.clear();
    ui->table->setRowCount(0);
    myfile.clear();
    prepare_table();
    ui->filename->setText("Company Data");
}

void MainWindow::on_table_itemClicked(QTableWidgetItem *item)
{
    int row = ui->table->currentRow();
    ui->firstname_2->setText(ui->table->item(row,1)->text());
    ui->surname_2->setText(ui->table->item(row,0)->text());
    ui->contact->setText(ui->table->item(row,2)->text());
    ui->department->setCurrentText(ui->table->item(row,3)->text());
    editing = row;
}
