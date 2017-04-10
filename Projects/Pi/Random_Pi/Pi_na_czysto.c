#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<float.h>
#define r 1000001
#define n 500
#define t 1000
#define z 1
int main()
{
srand(time(0));
long double a,b,at,bt,a2,b2;
int a1,b1,i=0,j=0,y=0,k=0,m=0,pom=0,con=0,son1=0,son2=0,cofactor=0,coprime=0;
double x,pi,wyniki[t],ost_wyniki[z],suma=0,ost_pi,ost_ost_pi;
for(y=0;y<z;y++){
for(j=0;j<t;j++){
for(i=0;i<n;i++){
    a=rand()%r;
    b=rand()%r;
    if(a>b){
     m=b;
        for(k=2;k<=m&&pom!=1;k++){
            at=a/k;
            bt=b/k;
            a1=trunc(at);
            b1=trunc(bt);
            a2=at-a1;
            b2=bt-b1;
            if(a2==0&&b2==0){
                cofactor=cofactor+1;
                pom=1;
            }
            else{
                coprime=coprime+1;
            }
            if(son1==1&&son2!=1){
                k=b-1;
                son2=1;
            }
            if(k>(3*sqrt(b))&&con!=1){
                k=b/2;
                con=1;
                son1=1;
            }
        }
     pom=0,con=0,son1=0,son2=0;
    }
    else{
     m=a;
        for(k=2;k<=m&&pom!=1;k++){
            at=a/k;
            bt=b/k;
            a1=trunc(at);
            b1=trunc(bt);
            a2=at-a1;
            b2=bt-b1;
            if(a2==0&&b2==0){
                cofactor=cofactor+1;
                pom=1;
            }
            else{
                coprime=coprime+1;
            }
            if(son1==1&&son2!=1){
                k=a-1;
                son2=1;
            }
            if(k>(3*sqrt(a))&&con!=1){
                k=a/2;
                con=1;
                son1=1;
            }
        }
     pom=0,con=0,son1=0,son2=0;
     }
}
coprime=n-cofactor;
x=(double)coprime/n;
pi=sqrt(6/x);
wyniki[j]=pi;
coprime=0,cofactor=0;
}
for(j=0;j<t;j++){
    suma=suma+wyniki[j];
}
ost_pi=suma/t;
suma=0;
printf("\n\nost_pi=%.15f        z=%d\n\n",ost_pi,y);
ost_wyniki[y]=ost_pi;
}
for(y=0;y<z;y++){
    printf("\nost_wyniki=%.15f",ost_wyniki[y]);
    suma=suma+ost_wyniki[y];
}
ost_ost_pi=suma/z;
suma=0;
printf("\n\nost_ost_pi=%.15f",ost_ost_pi);
return 0;
}
