
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

protected:
    void keyPressEvent(QKeyEvent *);

private:
    QString clr2rgb(QColor clr);
    QString clr2hex(QColor clr);
    void clrShow(QColor clr, const QString &str="");

private slots:
    void on_leRgb_returnPressed();
    void on_leHex_returnPressed();
    void on_pbPickColorStart_clicked();
    void on_pbPickColorStop_clicked();
    void slotTimer();

private:
    Ui::Dialog *ui;
    QTimer *timer_;
};

#endif // DIALOG_H

