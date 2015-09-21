#ifndef CREATETRIE_H
#define CREATETRIE_H

#include <QWidget>
#include "node.h"
namespace Ui {
class createtrie;
}

class createtrie : public QWidget
{
    Q_OBJECT

public:
    explicit createtrie(QWidget *parent = 0);
    ~createtrie();
  node *create_t(string inp,node *root);
private:
    Ui::createtrie *ui;
};

#endif // CREATETRIE_H
