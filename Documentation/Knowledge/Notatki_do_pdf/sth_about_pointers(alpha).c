#include <stdio.h>
int main()
{
/*
  int x=4,*wsk1, *wsk2,b;
  wsk1 = &x;
  wsk2 = wsk1;
  b=wsk1;
  printf("\nWSK1 to\t %d",*wsk1);
  printf("\nWSK2 to\t %d",*wsk2);
  printf("\nAdres WSK1 to \t %d ",wsk1);
  printf("\nAdres WSK2 to \t %d ",wsk2);
  printf("\nAdres X to \t %d ",&x);
  printf("\nb=%d ",b);
*/

/*
//int x=1,y=2,*wsk1, *wsk2;
//  wsk1 = &x;                //najpierw wskazac adres
//  wsk2 = &y;
//  *wsk2 = *wsk1;            //potem podstawiac wartosc z podanego adresu
 int x=1,y=2,z=6,*wsk1, *wsk2,*wsk3 ;
  wsk1 = &x;
  wsk2 = &y;
  wsk3 = &z;
  *wsk2 = *wsk1;
 printf("\nWARTOSC WSK1 %d ",*wsk1);
 printf("\nWARTOSC WSK2 %d ",*wsk2);
  printf("\nWARTOSC WSK3 %d ",*wsk3);
 printf("\nAdres x %d",&x);
 printf("\nAdres y %d",&y);
  printf("\nAdres z %d",&z);
  printf("\n x %d",x);
 printf("\n y %d",y);
  printf("\n z %d",z);
*/

/*
  int *g,a;
  //zmienna g zosta³a zadeklarowana jako wskaŸnik do liczby ca³kowitej
  //zmienna a jako liczba ca³kowita
  g=&a;
  *g=88;	//Odwo³anie niejawne do zmiennej a
  printf("\nZmienna a=%d",a);//Odwo³anie jawne do zmiennej a
*/


     int **c1,*c,liczba_calkowita,***c2,**ct;
     liczba_calkowita=5;
     c=&liczba_calkowita;
     c1=&c;
     c2=&c1;
     ct=&c1;
     printf("Wartosc zmiennej liczba_calkowita-->%d\n",liczba_calkowita);
     printf("Wartosc zmiennej wskazywanej przez c1-->%d\n",**c1);
     printf("\n liczba calkowita %d",&liczba_calkowita);
     printf("\n c                %d",c);
     printf("\n c1               %d",c1);
     printf("\n *c1              %d",*c1);
     printf("\n **c1             %d",**c1);
     (*c)++;
     printf("\n\n c2               %d",c2);
     printf("\n *c2              %d",*c2);
     printf("\n **c2             %d",**c2);
     printf("\n ***c2            %d",***c2);
     printf("\n\n ct               %d",ct);
     printf("\n *ct              %d",*ct);
     printf("\n **ct             %d",**ct);
   //  printf("\n ***ct            %d",***ct);


return 0;
}
