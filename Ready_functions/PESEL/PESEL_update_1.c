#include <stdio.h>

int main()
{

int check,i;
char test [3];

for (i=0;i<100;++i)
{
fflush(stdin);
scanf("\n%s",test);

check=(test[0]>=48&&test[0]<=57) ? 0:1;

printf("\n\n%d",check);
}

 return 0;
}
