#include<stdio.h>

void przerwa ()
{
  printf("\n");
}

int main()
{
int i;

for(i=1; i<=10; ++i){                       /*the same result*/
printf("%d", i);
}

przerwa();

for(i=1; i<=10; ++i)                      /*the same result*/
printf("%d", i);

przerwa();
    
for(i=1; i<=10; printf("%d", i++ ) );     /*the same result*/

    
return 0;    
}
