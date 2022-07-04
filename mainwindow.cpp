#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTabBar>
#include <QGraphicsOpacityEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->setHidden(true);
    connect(ui->submitButton, &QPushButton::clicked, this, [this] { ui->tabWidget->setCurrentIndex(1); });
}

MainWindow::~MainWindow()
{
    delete ui;
}

