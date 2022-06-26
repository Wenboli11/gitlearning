#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>

class QmyWidget : public QWidget
{
    Q_OBJECT
private:
    QPerson *boy;
    QPerson *girl;
public:
    explicit QmyWidget(QWidget *parent = nullptr);
    ~QmyWidget();
signals:

public slots:
};

#endif // QMYWIDGET_H
