#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_checkBoxUnderline_clicked(bool checked);

    void on_checkBoxItalic_clicked(bool checked);

    void on_checkBoxBold_clicked(bool checked);
    void on_ratioBox_clicked();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
