#include<stdio.h>

void gap ()
{
  printf("\n");
}

int main()
{
int i;

for(i=1; i<=10; ++i){                      /*the same result*/
printf("%d", i);
}

gap();

for(i=1; i<=10; ++i)                       /*the same result*/
printf("%d", i);

gap();
    
for(i=1; i<=10; printf("%d", i++ ) );      /*the same result*/

gap();
  
int a = 1;
do printf ("%d ", a*a*a); while (++a <= 10);
  
  
return 0;    
}
