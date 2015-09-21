#include "searchword.h"
#include "ui_searchword.h"

searchword::searchword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchword)
{
    ui->setupUi(this);setFixedSize(500,300);
}

searchword::~searchword()
{
    delete ui;
}
void searchword::showtext(string inp, int i_c,node *tr,QString sf,int count)
{
    if(inp[i_c]=='\0' && tr->end=='$' && count==1)
        sf.append("\nFOUND");
    else
         sf.append("\nNOT FOUND");

    ui->textBrowser->setText(sf);
}
