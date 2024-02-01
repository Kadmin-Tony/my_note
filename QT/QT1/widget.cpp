#include "widget.h"
#include <QPushButton>
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 设置标题
    this -> setWindowTitle("第一个窗口");
    // 设置初始大小
    this -> resize(500, 300);
    // 设置固定大小
    this -> setFixedSize(300, 300);
}

Widget::~Widget()
{
    delete ui;
}

