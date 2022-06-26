#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->rBtnBlack,SIGNAL(clicked(bool)),this,SLOT(on_ratioBox_clicked()));
    QObject::connect(ui->rBtnBlue,SIGNAL(clicked(bool)),this,SLOT(on_ratioBox_clicked()));
    QObject::connect(ui->rBtnRed,SIGNAL(clicked(bool)),this,SLOT(on_ratioBox_clicked()));

}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::on_checkBoxItalic_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}
void Dialog::on_ratioBox_clicked()
{
    QPalette plt=ui->plainTextEdit->palette();
    if(ui->rBtnRed->isChecked())
    {
        plt.setColor(QPalette::Text,Qt::red);
    }
    else if(ui->rBtnBlack->isChecked())
    {
        plt.setColor(QPalette::Text,Qt::black);
    }
    else if(ui->rBtnBlue->isChecked())
    {
        plt.setColor(QPalette::Text,Qt::blue);
    }
    else
    {
        plt.setColor(QPalette::Text,Qt::black);
    }
    ui->plainTextEdit->setPalette(plt);
}

void Dialog::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}
