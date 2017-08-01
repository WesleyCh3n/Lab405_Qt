#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Ordering System");
    ui->label->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_accepted()
{
    int sum = 0;
    sum +=(ui->checkBox_Hamberger->isChecked())?120:0;
    sum +=(ui->checkBox_Pizza->isChecked())?150:0;
    sum +=(ui->checkBox_Sushi->isChecked())?100:0;
    sum +=(ui->checkBox_Sandwich->isChecked())?70:0;
    sum +=(ui->checkBox_Taco->isChecked())?60:0;
    sum +=(ui->checkBox_Cola->isChecked())?50:0;
    sum +=(ui->checkBox_BlackTea->isChecked())?25:0;
    sum +=(ui->checkBox_MilkTea->isChecked())?30:0;
    sum +=(ui->checkBox_Coffee->isChecked())?55:0;
    sum +=(ui->checkBox_Sprite->isChecked())?45:0;
    if(ui->radioButton->isChecked()){
        sum=sum*0.9;
    }
    if(ui->radioButton_2->isChecked()){
        sum=sum*0.8;
    }
    if(ui->radioButton_3->isChecked()){
        sum=sum*0.7;
    }
    if(ui->radioButton_4->isChecked()){
        if(sum!=0)sum-=20;
    }
    if(ui->radioButton_5->isChecked()){
        if(sum!=0)sum-=50;
    }
    ui->label_2->setText("Total $"+QString::number(sum));
}

void MainWindow::on_buttonBox_rejected()
{
    ui->label_2->setText("Total $0");
    ui->checkBox_BlackTea->setCheckState(Qt::Unchecked);
    ui->checkBox_Coffee->setCheckState(Qt::Unchecked);
    ui->checkBox_Cola->setCheckState(Qt::Unchecked);
    ui->checkBox_Hamberger->setCheckState(Qt::Unchecked);
    ui->checkBox_MilkTea->setCheckState(Qt::Unchecked);
    ui->checkBox_Pizza->setCheckState(Qt::Unchecked);
    ui->checkBox_Sandwich->setCheckState(Qt::Unchecked);
    ui->checkBox_Sprite->setCheckState(Qt::Unchecked);
    ui->checkBox_Sushi->setCheckState(Qt::Unchecked);
    ui->checkBox_Taco->setCheckState(Qt::Unchecked);
    ui->radioButton->setAutoExclusive(false);
    ui->radioButton->setChecked(false);
    ui->radioButton_2->setAutoExclusive(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setAutoExclusive(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setAutoExclusive(false);
    ui->radioButton_4->setChecked(false);
    ui->radioButton_5->setAutoExclusive(false);
    ui->radioButton_5->setChecked(false);
}
