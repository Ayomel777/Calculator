#include "mainwindow.h"
#include "./ui_mainwindow.h"

double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_plusminus,SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_Procent,SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_Plus,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_Multiply,SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_Devide,SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_Devide->setCheckable(true);
    ui->pushButton_Plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_Multiply->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitsNumbers()
{
    QPushButton *button = (QPushButton*) sender();

    double all_numbers;
    QString new_lable;

    if (ui->lbResult->text().contains(".") && button->text() == "0"){
        new_lable = ui->lbResult->text() + button->text();
    } else {

    all_numbers = (ui->lbResult->text() + button->text()).toDouble();

    new_lable = QString::number(all_numbers, 'g', 15);
    }
    ui->lbResult->setText(new_lable);
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton*) sender();

    num_first = (ui->lbResult->text()).toDouble();
    ui->lbResult->setText("");
    button->setChecked(true);
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton*) sender();
    double all_numbers;
    QString new_lable;

    if(button->text() == "+/-") {
        all_numbers = (ui->lbResult->text()).toDouble();
        all_numbers *= -1;
        new_lable = QString::number(all_numbers, 'g', 15);
        ui->lbResult->setText(new_lable);
    } else if (button->text() == "%") {
        all_numbers = (ui->lbResult->text()).toDouble();
        all_numbers *= 0.01;
        new_lable = QString::number(all_numbers, 'g', 15);
        ui->lbResult->setText(new_lable);
    }


}

void MainWindow::on_pushButton_Dot_clicked()
{
    if(!ui->lbResult->text().contains("."))
      ui->lbResult->setText(ui->lbResult->text() + ".");
}


void MainWindow::on_pushButton_AC_clicked()
{
    ui->pushButton_Plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_Devide->setChecked(false);
    ui->pushButton_Multiply->setChecked(false);

    ui->lbResult->setText("0");
}


void MainWindow::on_pushButton_Equal_clicked()
{
    double lable_number, num_second;
    QString new_lable;

    num_second = ui->lbResult->text().toDouble();

    if(ui->pushButton_Plus->isChecked()){
        lable_number = num_first + num_second;
        new_lable = QString::number(lable_number,'g', 15);

        ui->lbResult->setText(new_lable);
        ui->pushButton_Plus->setChecked(false);
    } else if(ui->pushButton_minus->isChecked()){
        lable_number = num_first - num_second;
        new_lable = QString::number(lable_number,'g', 15);

        ui->lbResult->setText(new_lable);
        ui->pushButton_minus->setChecked(false);
    } else if(ui->pushButton_Devide->isChecked()){
        if(num_second == 0) {
            ui->lbResult->setText("0");
        } else {
        lable_number = num_first / num_second;
        new_lable = QString::number(lable_number,'g', 15);
        }
        ui->lbResult->setText(new_lable);
        ui->pushButton_Devide->setChecked(false);
    }else if(ui->pushButton_Multiply->isChecked()){
        lable_number = num_first * num_second;
        new_lable = QString::number(lable_number,'g', 15);

        ui->lbResult->setText(new_lable);
        ui->pushButton_Multiply->setChecked(false);
    }
}

