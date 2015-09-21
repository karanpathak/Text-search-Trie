#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createtrie.h"
#include "searchword.h"

QFile file(":/test.txt");
QTextStream point(&file);
QString sf,sd,str;
string inp;
int count,i_c;
node *tr;
node *root=new node();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);setFixedSize(600,400);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {   ui->textBrowser->setText("ERROR");
        exit(-1);
    }
    str=point.readAll();
ui->textBrowser->setText(str);
   file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_search_clicked()
{
    sd=ui->lineEdit->text();
       search_t(sd);

}

void MainWindow::on_actionCREATE_triggered()
{
    createtrie *cre=new createtrie();

    inp=str.toStdString();
    ::root=cre->create_t(inp,::root);
    cre->show();
}

void MainWindow::search_t(QString)
{sf="";
inp=::sd.toStdString();

 ::count=1;
::tr=root;::sf.append("root");
    for(i_c=0;inp[i_c]!='\0';i_c++)
      {
            switch (inp[i_c])
            {
            case 'a': if(::tr->a==NULL)
                       {::count=0;break;}
                          ::tr=::tr->a;
                       ::sf.append("->");::sf.append(::tr->val);break;
            case 'b': if(::tr->b==NULL)
                       {::count=0;break;}

                         ::tr=::tr->b;::sf.append("->");::sf.append(::tr->val);break;
            case 'c': if(::tr->c==NULL)
                        {::count=0;break;}

                         ::tr=::tr->c;::sf.append("->");::sf.append(::tr->val);break;
            case 'd': if(::tr->d==NULL)
                       {::count=0;break;}

                         ::tr=::tr->d;::sf.append("->");::sf.append(::tr->val);break;

            case 'e': if(::tr->e==NULL)
                       {::count=0;break;}

                         ::tr=::tr->e;::sf.append("->");::sf.append(::tr->val);break;
            case 'f': if(::tr->f==NULL)
                       {::count=0;break;}

                         ::tr=::tr->f;::sf.append("->");::sf.append(::tr->val);break;
            case 'g': if(::tr->g==NULL)
                      {::count=0;break;}

                         ::tr=::tr->g;::sf.append("->");::sf.append(::tr->val);break;
            case 'h': if(::tr->h==NULL)
                       {::count=0;break;}

                         ::tr=::tr->h;::sf.append("->");::sf.append(::tr->val);break;
            case 'i': if(::tr->i==NULL)
                       {::count=0;break;}

                         ::tr=::tr->i;::sf.append("->");::sf.append(::tr->val);break;
            case 'j': if(::tr->j==NULL)
                       {::count=0;break;}

                         ::tr=::tr->j;::sf.append("->");::sf.append(::tr->val);break;
            case 'k':
                if(::tr->k==NULL)
                       {::count=0;break;}

                          ::tr=::tr->k;::sf.append("->");::sf.append(::tr->val);break;
            case 'l': if(::tr->l==NULL)
                       {::count=0;break;}

                         ::tr=::tr->l;::sf.append("->");::sf.append(::tr->val);break;
            case 'm': if(::tr->m==NULL)
                       {::count=0;break;}

                         ::tr=::tr->m;::sf.append("->");::sf.append(::tr->val);break;
            case 'n': if(::tr->n==NULL)
                       {::count=0;break;}

                         ::tr=::tr->n;::sf.append("->");::sf.append(::tr->val);break;
            case 'o': if(::tr->o==NULL)
                       {::count=0;break;}
                         ::tr=::tr->o;::sf.append("->");::sf.append(::tr->val);break;
            case 'p': if(::tr->p==NULL)
                       {::count=0;break;}
                         ::tr=::tr->p;::sf.append("->");::sf.append(::tr->val);break;
            case 'q': if(::tr->q==NULL)
                       {::count=0;break;}
                         ::tr=::tr->q;::sf.append("->");::sf.append(::tr->val);break;
            case 'r': if(::tr->r==NULL)
                       {::count=0;break;}
                         ::tr=::tr->r;::sf.append("->");::sf.append(::tr->val);break;
            case 's': if(::tr->s==NULL)
                       {::count=0;break;}
                         ::tr=::tr->s;::sf.append("->");::sf.append(::tr->val);break;
            case 't': if(::tr->t==NULL)
                       {::count=0;break;}
                         ::tr=::tr->t;::sf.append("->");::sf.append(::tr->val);break;
            case 'u': if(::tr->u==NULL)
                       {::count=0;break;}
                         ::tr=::tr->u;::sf.append("->");::sf.append(::tr->val);break;
            case 'v': if(::tr->v==NULL)
                       {::count=0;break;}
                         ::tr=::tr->v;::sf.append("->");::sf.append(::tr->val);break;
            case 'w': if(::tr->w==NULL)
                       {::count=0;break;}
                         ::tr=::tr->w;::sf.append("->");::sf.append(::tr->val);break;
            case 'x': if(::tr->x==NULL)
                       {::count=0;break;}
                         ::tr=::tr->x;::sf.append("->");::sf.append(::tr->val);break;
            case 'y': if(::tr->y==NULL)
                       {::count=0;break;}
                         ::tr=::tr->y;::sf.append("->");::sf.append(::tr->val);break;
            case 'z': if(::tr->z==NULL)
                       {::count=0;break;}
                         ::tr=::tr->z;::sf.append("->");::sf.append(::tr->val);break;
 case 'A': if(::tr->A==NULL)
                       {::count=0;break;}
                          ::tr=::tr->A;
                       ::sf.append("->");::sf.append(::tr->val);break;
case 'B': if(::tr->B==NULL)
                       {::count=0;break;}
                          ::tr=::tr->B;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'C': if(::tr->C==NULL)
                       {::count=0;break;}
                          ::tr=::tr->C;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'D': if(::tr->D==NULL)
                       {::count=0;break;}
                          ::tr=::tr->D;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'E': if(::tr->E==NULL)
                       {::count=0;break;}
                          ::tr=::tr->E;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'F': if(::tr->F==NULL)
                       {::count=0;break;}
                          ::tr=::tr->F;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'G': if(::tr->G==NULL)
                       {::count=0;break;}
                          ::tr=::tr->G;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'H': if(::tr->H==NULL)
                       {::count=0;break;}
                          ::tr=::tr->H;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'I': if(::tr->I==NULL)
                       {::count=0;break;}
                          ::tr=::tr->I;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'J': if(::tr->J==NULL)
                       {::count=0;break;}
                          ::tr=::tr->J;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'K': if(::tr->K==NULL)
                       {::count=0;break;}
                          ::tr=::tr->K;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'L': if(::tr->L==NULL)
                       {::count=0;break;}
                          ::tr=::tr->L;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'M': if(::tr->M==NULL)
                       {::count=0;break;}
                          ::tr=::tr->M;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'N': if(::tr->N==NULL)
                       {::count=0;break;}
                          ::tr=::tr->N;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'O': if(::tr->O==NULL)
                       {::count=0;break;}
                          ::tr=::tr->O;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'P': if(::tr->P==NULL)
                       {::count=0;break;}
                          ::tr=::tr->P;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'Q': if(::tr->Q==NULL)
                       {::count=0;break;}
                          ::tr=::tr->Q;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'R': if(::tr->R==NULL)
                       {::count=0;break;}
                          ::tr=::tr->R;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'S': if(::tr->S==NULL)
                       {::count=0;break;}
                          ::tr=::tr->S;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'T': if(::tr->T==NULL)
                       {::count=0;break;}
                          ::tr=::tr->T;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'U': if(::tr->U==NULL)
                       {::count=0;break;}
                          ::tr=::tr->U;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'V': if(::tr->V==NULL)
                       {::count=0;break;}
                          ::tr=::tr->V;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'W': if(::tr->W==NULL)
                       {::count=0;break;}
                          ::tr=::tr->W;
                       ::sf.append("->");::sf.append(::tr->val);break;
  case 'X': if(::tr->X==NULL)
                       {::count=0;break;}
                          ::tr=::tr->X;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'Y': if(::tr->Y==NULL)
                       {::count=0;break;}
                          ::tr=::tr->Y;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case 'Z': if(::tr->Z==NULL)
                       {::count=0;break;}
                          ::tr=::tr->Z;
                       ::sf.append("->");::sf.append(::tr->val);break;
 case '!': if(::tr->exc=NULL)
                       {::count=0;break;}
                          ::tr=::tr->exc;
                       ::sf.append("->");::sf.append(::tr->val);break;

case '?': if(::tr->ques==NULL)
                       {::count=0;break;}
                          ::tr=::tr->ques;
                       ::sf.append("->");::sf.append(::tr->val);break;
					                         
            default: ::count=0;::sf.append("#");break;
            }
         if(::count==0){::sf.append("\n");break;}
  }
    ::sf.append("\n");
    searchword *sho=new searchword();
    sho->showtext(inp,i_c,::tr,::sf,::count);
   sho->show();


}
