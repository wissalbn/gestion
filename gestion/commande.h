#ifndef COMMANDE_H
#define COMMANDE_H

#include <QWidget>

namespace Ui {
class commande;
}

class commande : public QWidget
{
    Q_OBJECT

public:
    explicit commande(QWidget *parent = nullptr);
    ~commande();

private slots:
    void on_pushButton_clicked();

private:
    Ui::commande *ui;
};

#endif // COMMANDE_H
