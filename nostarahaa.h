#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>

namespace Ui {
class nostaRahaa;
}

class nostaRahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostaRahaa(QWidget *parent = 0);
    ~nostaRahaa();

private slots:
    void on_palaaButton_clicked();

    void on_tenButton_clicked();

    void on_twentyButton_clicked();

    void on_fiftyButton_clicked();

    void on_hundredButton_clicked();

    void on_twohundredButton_clicked();

    void on_fivehundredButton_clicked();

private:
    Ui::nostaRahaa *ui;
};

#endif // NOSTARAHAA_H
