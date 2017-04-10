#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include <float.h>
#define r 1000001    //z jakiego zakresu losuje liczby                                             wielkosc kosci
#define n 500         //ile liczb losuje (dla jednego pi, wewnatrz tablicy)                                        ilosc rzutow
#define t 1000        //przez ile cykli
int main()
{
srand(time(0));

long double a,b,at,bt,a2,b2;
int a1,b1;
int i=0,j=0;
int k=0;
int m=0;
int pom=0,con=0,son1=0,son2=0;
int cofactor=0;
int coprime=0;
double x;
double pi;
double wyniki[t];
double suma=0;
double ost_pi;

for(j=0;j<t;j++)                //tworzy tablice wynikow
{

for(i=0;i<n;i++)                //tworzy wyniki
{
    a=rand()%r;
    b=rand()%r;
   // printf("\n  %f  %f\n",a,b);
    if(a>b)
    {
     m=b;
        for(k=2;k<=m&&pom!=1;k++)
        {
            at=a/k;
            bt=b/k;
           // printf("  %f  %f",a,b);

            a1=trunc(at);
            b1=trunc(bt);
          //  printf("\n  %d         %d",a1,b1);

            a2=at-a1;
            b2=bt-b1;
          //  printf("\n  %f  %f",a2,b2);

            if(a2==0&&b2==0)
            {
                cofactor=cofactor+1;
                pom=1;
            }
            else
            {
                coprime=coprime+1;
            }
            if(son1==1&&son2!=1)
            {
                k=b-1;
                son2=1;
            }
            if(k>(3*sqrt(b))&&con!=1)
            {
                k=b/2;
                con=1;
                son1=1;
            }
          //  printf("\ncoprime=%d  cofactor=%d               n=%d    t=%d",coprime,cofactor,i,j);
          //  printf("\n\n");
          //  printf("\n              k=%d        \n",k);
        }
     pom=0;
     con=0;
     son1=0,son2=0;
    }
    else
    {
     m=a;
        for(k=2;k<=m&&pom!=1;k++)
        {
            at=a/k;
            bt=b/k;
          //  printf("  %f  %f",a,b);

            a1=trunc(at);
            b1=trunc(bt);
          //  printf("\n  %d         %d",a1,b1);

            a2=at-a1;
            b2=bt-b1;
          //  printf("\n  %f  %f",a2,b2);

            if(a2==0&&b2==0)
            {
                cofactor=cofactor+1;
                pom=1;
            }
            else
            {
                coprime=coprime+1;
            }
            if(son1==1&&son2!=1)
            {
                k=a-1;
                son2=1;
            }
            if(k>(3*sqrt(a))&&con!=1)
            {
                k=a/2;
                con=1;
                son1=1;
            }
         //   printf("\ncoprime=%d  cofactor=%d               n=%d    t=%d",coprime,cofactor,i,j);
          //  printf("\n\n");
          //  printf("\n              k=%d        \n",k);
        }
     pom=0;
     con=0;
     son1=0,son2=0;
    }
}

coprime=n-cofactor;
//printf("coprime=%d",coprime);
x=(double)coprime/n;
//printf("\nx=%.10f",x);
pi=sqrt(6/x);
//printf("\npi=%.15f",pi);

wyniki[j]=pi;
coprime=0,cofactor=0;
}

for(j=0;j<t;j++)                //wypisuje tablice i liczy srednia
{
    //printf("\nWyniki[%d]=%f",j,wyniki[j]);
    suma=suma+wyniki[j];
}
ost_pi=suma/t;
printf("\n\nost_pi=%.15f\n\n",ost_pi);

return 0;
}
