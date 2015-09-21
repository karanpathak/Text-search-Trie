#include "createtrie.h"
#include "ui_createtrie.h"

createtrie::createtrie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createtrie)
{
    ui->setupUi(this);
    setFixedSize(500,300);
}

createtrie::~createtrie()
{
    delete ui;
}
node *createtrie::create_t(string inp,node *root)
{ node *tr;
  QString st;

int i_c;
for(i_c=0;inp[i_c-1]!='\0';i_c++)
  {tr=root; st.append("root");
    while(inp[i_c]!='\0' && inp[i_c]!=' ')
    {
        switch (inp[i_c])
        {
        case 'a': if(tr->a==NULL)
                   {node *n_create=new node();
                      n_create->val='a';tr->a=n_create;
                    }
                     tr=tr->a;st.append("->");st.append(tr->val);break;
        case 'b': if(tr->b==NULL)
                   {node *n_create=new node();
                      n_create->val='b';tr->b=n_create;
                    }
                     tr=tr->b;st.append("->");st.append(tr->val);break;
        case 'c': if(tr->c==NULL)
                   {node *n_create=new node();
                      n_create->val='c';tr->c=n_create;
                    }
                     tr=tr->c;st.append("->");st.append(tr->val);break;
        case 'd': if(tr->d==NULL)
                   {node *n_create=new node();
                      n_create->val='d';tr->d=n_create;
                    }
                     tr=tr->d;st.append("->");st.append(tr->val);break;

        case 'e': if(tr->e==NULL)
                   {node *n_create=new node();
                      n_create->val='e';tr->e=n_create;
                    }
                     tr=tr->e;st.append("->");st.append(tr->val);break;
        case 'f': if(tr->f==NULL)
                   {node *n_create=new node();
                      n_create->val='f';tr->f=n_create;
                    }
                     tr=tr->f;st.append("->");st.append(tr->val);break;
        case 'g': if(tr->g==NULL)
                   {node *n_create=new node();
                      n_create->val='g';tr->g=n_create;
                    }
                     tr=tr->g;st.append("->");st.append(tr->val);break;
        case 'h': if(tr->h==NULL)
                   {node *n_create=new node();
                      n_create->val='h';tr->h=n_create;
                    }
                     tr=tr->h;st.append("->");st.append(tr->val);break;
        case 'i': if(tr->i==NULL)
                   {node *n_create=new node();
                      n_create->val='i';tr->i=n_create;
                    }
                     tr=tr->i;st.append("->");st.append(tr->val);break;
        case 'j': if(tr->j==NULL)
                   {node *n_create=new node();
                      n_create->val='j';tr->j=n_create;
                    }
                     tr=tr->j;st.append("->");st.append(tr->val);break;
        case 'k': if(tr->k==NULL)
                   {node *n_create=new node();
                      n_create->val='k';tr->k=n_create;
                    }
                     tr=tr->k;st.append("->");st.append(tr->val);break;
        case 'l': if(tr->l==NULL)
                   {node *n_create=new node();
                      n_create->val='l';tr->l=n_create;
                    }
                     tr=tr->l;st.append("->");st.append(tr->val);break;
        case 'm': if(tr->m==NULL)
                   {node *n_create=new node();
                      n_create->val='m';tr->m=n_create;
                    }
                     tr=tr->m;st.append("->");st.append(tr->val);break;
        case 'n': if(tr->n==NULL)
                   {node *n_create=new node();
                      n_create->val='n';tr->n=n_create;
                    }
                     tr=tr->n;st.append("->");st.append(tr->val);break;
        case 'o': if(tr->o==NULL)
                   {node *n_create=new node();
                      n_create->val='o';tr->o=n_create;
                    }
                     tr=tr->o;st.append("->");st.append(tr->val);break;
        case 'p': if(tr->p==NULL)
                   {node *n_create=new node();
                      n_create->val='p';tr->p=n_create;
                    }
                     tr=tr->p;st.append("->");st.append(tr->val);break;
        case 'q': if(tr->q==NULL)
                   {node *n_create=new node();
                      n_create->val='q';tr->q=n_create;
                    }
                     tr=tr->q;st.append("->");st.append(tr->val);break;
        case 'r': if(tr->r==NULL)
                   {node *n_create=new node();
                      n_create->val='r';tr->r=n_create;
                    }
                     tr=tr->r;st.append("->");st.append(tr->val);break;
        case 's': if(tr->s==NULL)
                   {node *n_create=new node();
                      n_create->val='s';tr->s=n_create;
                    }
                     tr=tr->s;st.append("->");st.append(tr->val);break;
        case 't': if(tr->t==NULL)
                   {node *n_create=new node();
                      n_create->val='t';tr->t=n_create;
                    }
                     tr=tr->t;st.append("->");st.append(tr->val);break;
        case 'u': if(tr->u==NULL)
                   {node *n_create=new node();
                      n_create->val='u';tr->u=n_create;
                    }
                     tr=tr->u;st.append("->");st.append(tr->val);break;
        case 'v': if(tr->v==NULL)
                   {node *n_create=new node();
                      n_create->val='v';tr->v=n_create;
                    }
                     tr=tr->v;st.append("->");st.append(tr->val);break;
        case 'w': if(tr->w==NULL)
                   {node *n_create=new node();
                      n_create->val='w';tr->w=n_create;
                    }
                     tr=tr->w;st.append("->");st.append(tr->val);break;
        case 'x': if(tr->x==NULL)
                   {node *n_create=new node();
                      n_create->val='x';tr->x=n_create;
                    }
                     tr=tr->x;st.append("->");st.append(tr->val);break;
        case 'y': if(tr->y==NULL)
                   {node *n_create=new node();
                      n_create->val='y';tr->y=n_create;
                    }
                     tr=tr->y;st.append("->");st.append(tr->val);break;
        case 'z': if(tr->z==NULL)
                   {node *n_create=new node();
                      n_create->val='z';tr->z=n_create;
                    }
                     tr=tr->z;st.append("->");st.append(tr->val);break;

        case 'A': if(tr->A==NULL)
                   {node *n_create=new node();
                      n_create->val='A';tr->A=n_create;
                    }
                     tr=tr->A;st.append("->");st.append(tr->val);break;
        case 'B': if(tr->B==NULL)
                   {node *n_create=new node();
                      n_create->val='B';tr->B=n_create;
                    }
                     tr=tr->B;st.append("->");st.append(tr->val);break;
        case 'C': if(tr->C==NULL)
                   {node *n_create=new node();
                      n_create->val='C';tr->C=n_create;
                    }
                     tr=tr->C;st.append("->");st.append(tr->val);break;
        case 'D': if(tr->D==NULL)
                   {node *n_create=new node();
                      n_create->val='D';tr->D=n_create;
                    }
                     tr=tr->D;st.append("->");st.append(tr->val);break;
        case 'E': if(tr->E==NULL)
                   {node *n_create=new node();
                      n_create->val='E';tr->E=n_create;
                    }
                     tr=tr->E;st.append("->");st.append(tr->val);break;
        case 'F': if(tr->F==NULL)
                   {node *n_create=new node();
                      n_create->val='F';tr->F=n_create;
                    }
                     tr=tr->F;st.append("->");st.append(tr->val);break;
        case 'G': if(tr->G==NULL)
                   {node *n_create=new node();
                      n_create->val='G';tr->G=n_create;
                    }
                     tr=tr->G;st.append("->");st.append(tr->val);break;
        case 'H': if(tr->H==NULL)
                   {node *n_create=new node();
                      n_create->val='H';tr->H=n_create;
                    }
                     tr=tr->H;st.append("->");st.append(tr->val);break;
        case 'I': if(tr->I==NULL)
                   {node *n_create=new node();
                      n_create->val='I';tr->I=n_create;
                    }
                     tr=tr->I;st.append("->");st.append(tr->val);break;
        case 'J': if(tr->J==NULL)
                   {node *n_create=new node();
                      n_create->val='J';tr->J=n_create;
                    }
                     tr=tr->J;st.append("->");st.append(tr->val);break;
        case 'K': if(tr->K==NULL)
                   {node *n_create=new node();
                      n_create->val='K';tr->K=n_create;
                    }
                     tr=tr->K;st.append("->");st.append(tr->val);break;
        case 'L': if(tr->L==NULL)
                   {node *n_create=new node();
                      n_create->val='L';tr->L=n_create;
                    }
                     tr=tr->L;st.append("->");st.append(tr->val);break;
        case 'M': if(tr->M==NULL)
                   {node *n_create=new node();
                      n_create->val='M';tr->M=n_create;
                    }
                     tr=tr->M;st.append("->");st.append(tr->val);break;
        case 'N': if(tr->N==NULL)
                   {node *n_create=new node();
                      n_create->val='N';tr->N=n_create;
                    }
                     tr=tr->N;st.append("->");st.append(tr->val);break;

        case 'O': if(tr->O==NULL)
                   {node *n_create=new node();
                      n_create->val='O';tr->O=n_create;
                    }
                     tr=tr->O;st.append("->");st.append(tr->val);break;
        case 'P': if(tr->P==NULL)
                   {node *n_create=new node();
                      n_create->val='P';tr->P=n_create;
                    }
                     tr=tr->P;st.append("->");st.append(tr->val);break;
        case 'R': if(tr->R==NULL)
                   {node *n_create=new node();
                      n_create->val='R';tr->R=n_create;
                    }
                     tr=tr->R;st.append("->");st.append(tr->val);break;
        case 'S': if(tr->S==NULL)
                   {node *n_create=new node();
                      n_create->val='S';tr->S=n_create;
                    }
                     tr=tr->S;st.append("->");st.append(tr->val);break;
        case 'T': if(tr->T==NULL)
                   {node *n_create=new node();
                      n_create->val='T';tr->T=n_create;
                    }
                     tr=tr->T;st.append("->");st.append(tr->val);break;
        case 'U': if(tr->U==NULL)
                   {node *n_create=new node();
                      n_create->val='U';tr->U=n_create;
                    }
                     tr=tr->U;st.append("->");st.append(tr->val);break;
        case 'V': if(tr->V==NULL)
                   {node *n_create=new node();
                      n_create->val='V';tr->V=n_create;
                    }
                     tr=tr->V;st.append("->");st.append(tr->val);break;
        case 'W': if(tr->W==NULL)
                   {node *n_create=new node();
                      n_create->val='W';tr->W=n_create;
                    }
                     tr=tr->W;st.append("->");st.append(tr->val);break;
        case 'X': if(tr->X==NULL)
                   {node *n_create=new node();
                      n_create->val='X';tr->X=n_create;
                    }
                     tr=tr->X;st.append("->");st.append(tr->val);break;
        case 'Y': if(tr->Y==NULL)
                   {node *n_create=new node();
                      n_create->val='Y';tr->Y=n_create;
                    }
                     tr=tr->Y;st.append("->");st.append(tr->val);break;
        case 'Z': if(tr->Z==NULL)
                   {node *n_create=new node();
                      n_create->val='Z';tr->Z=n_create;
                    }
                     tr=tr->Z;st.append("->");st.append(tr->val);break;
        case '!': if(tr->exc==NULL)
                   {node *n_create=new node();
                      n_create->val='!';tr->exc=n_create;
                    }
                     tr=tr->exc;st.append("->");st.append(tr->val);break;

        case '?': if(tr->ques==NULL)
                   {node *n_create=new node();
                      n_create->val='?';tr->ques=n_create;
                    }
                     tr=tr->ques;st.append("->");st.append(tr->val);break;

        }

    i_c++;
}

tr->end='$';
st.append("->");st.append(tr->end);st.append("\n");

}
ui->textBrowser->setText(st);
return root;
}
