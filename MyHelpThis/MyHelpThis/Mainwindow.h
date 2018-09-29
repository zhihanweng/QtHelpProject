#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
 * sfsdfsdf
 * fsdfsdf
 * @file mainwindow.h
 * @brief 就是这个味
 * Detail.
 *
 * @author wzh
 ***/
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class Assistant;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void startAssistant();

private:
    Ui::MainWindow *ui;
    Assistant *pAssistant;
};

#endif // MAINWINDOW_H
