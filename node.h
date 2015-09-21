#ifndef NODE_H
#define NODE_H
#include <string.h>
#include <QTextStream>
#include <QFile>
using namespace std;

class node
{
public:
    node()
    {
        a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=A=B=C=D=E=F=G=H=I=J=K=L=M=N=O=P=Q=R=S=T=U=V=W=X=Y=Z=exc=ques=apos=NULL;
        val=' ';end='#';
    }
    node *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q,*r,*s,*t,*u,*v,*w,*x,*y,*z;
	node *A,*B,*C,*D,*E,*F,*G,*H,*I,*J,*K,*L,*M,*N,*O,*P,*Q,*R,*S,*T,*U,*V,*W,*X,*Y,*Z,*exc,*ques,*apos;
    char val,end;

};

#endif // NODE_H
