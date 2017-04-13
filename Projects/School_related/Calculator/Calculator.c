#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suma(float a,float b)
{
    return a+b;
}

float roznica(float a,float b)
{
    return a-b;
}

float iloczyn(float a,float b)
{
    return a*b;
}

float iloraz(float a,float b)
{
    return a/b;
}

float potega(float a,float b)
{
    float c;
    c=pow(a,b);
    return c;
}

float pierwiastek(float a)
{
    float c;
    c=sqrt(a);
    return c;
}

int menu ()
{
    int c;
    printf("\nDodawanie         <1>");
    printf("\nOdejmowanie       <2>");
    printf("\nMnozenie          <3>");
    printf("\nDzielenie         <4>");
    printf("\nPotegowanie       <5>");
    printf("\nPierwiastkowanie  <6>");
    printf("\nWybor: ");
    scanf("%d",&c);
    return c;
}

int main()
{
float a,b;
int wybor=0,i=0;

do
{

wybor=menu();

if(wybor==6)
    {
    printf("\nPodaj liczbe: ");
    scanf("%f",&a);
    }
    else
    {
        printf("\nPodaj liczby: ");
        scanf("%f%f",&a,&b);
    }
switch(wybor)
    {
    case 1:
        printf("\n%.2f+%.2f=%.2f\n",a,b,suma(a,b));
        break;
    case 2:
        printf("\n%.2f-%.2f=%.2f\n",a,b,roznica(a,b));
        break;
    case 3:
        printf("\n%.2f*%.2f=%.2f\n",a,b,iloczyn(a,b));
        break;
    case 4:
        if(b==0)
        {
            printf("\nNie dziel przez zero!\n");
        }
        else
        {
        printf("\n%.2f/%.2f=%.2f\n",a,b,iloraz(a,b));
        }
        break;
    case 5:
        printf("\n%.2f^%.2f=%.2f\n",a,b,potega(a,b));
        break;
    case 6:
        printf("\nsqrt%.2f=%.2f\n",a,pierwiastek(a));
        break;
    }

}while(i<10);

return 0;
}
