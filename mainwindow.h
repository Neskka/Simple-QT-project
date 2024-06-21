#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_activated(int index);

    void on_pushButton_5_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_calendarWidget_selectionChanged();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_listWidget_2_itemClicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    float cena;
    float suma=0;
    float kara=0;
    QString k1, k2, k3, k4, k5, k6, k7, k8, k9, k10, k11, k12, k13, k14;
};
#endif // MAINWINDOW_H
