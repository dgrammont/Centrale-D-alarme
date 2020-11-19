#ifndef DETECTEUR_H
#define DETECTEUR_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Detecteur;
}

class Detecteur : public QDialog
{
    Q_OBJECT

public:
    explicit Detecteur(QWidget *parent = nullptr);
    ~Detecteur();

private slots:
    virtual void on_pushButtonIntrus_clicked();


private:
    Ui::Detecteur *ui;
    QTimer timer;
};

#endif // DETECTEUR_H
