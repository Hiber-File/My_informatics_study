#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{

int check,i;
char test [3];

for (i=0;i<100;++i)
{
fflush(stdin);
scanf("\n%s",test);

check=(isdigit(test[0])) ? 0:1;

printf("\n\n%d",check);
}

 return 0;
}
