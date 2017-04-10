#include<stdio.h>
#include<math.h>
#include<float.h>
#define n 90000000
int main()
{
double pi=4,x=0,z=3;
int i,pom=0;

for(i=0;i<n;i++)
{
    x=4/z;
    //printf("x=%f",x);
    if(pom==0)
    {
        pi=pi-x;
        pom=1;
    }
    else
    {
        pi=pi+x;
        pom=0;
    }
    z=z+2;
}

printf("\n pi=%.15f",pi);
return 0;
}
