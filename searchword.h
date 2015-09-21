#ifndef SEARCHWORD_H
#define SEARCHWORD_H

#include <QWidget>
#include "node.h"
namespace Ui {
class searchword;
}

class searchword : public QWidget
{
    Q_OBJECT

public:
    explicit searchword(QWidget *parent = 0);
    ~searchword();
    void showtext(string inp, int i_c, node *tr, QString sf, int count);
private:
    Ui::searchword *ui;
};

#endif // SEARCHWORD_H
