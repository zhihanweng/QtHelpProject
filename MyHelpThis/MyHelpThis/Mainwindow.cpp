#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include "Assistant.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QAction *pHelp = new QAction("help", this);
    ui->mainToolBar->addAction(pHelp);
    pAssistant = new Assistant;

    connect(pHelp, SIGNAL(triggered(bool)), this, SLOT(startAssistant()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pAssistant;
}

void MainWindow::startAssistant()
{
    pAssistant->showDocumentation("index.html");
}
