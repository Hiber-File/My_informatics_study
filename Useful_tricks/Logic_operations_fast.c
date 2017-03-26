#include <stdio.h>
int main()
{

{
int a=4,b=6;

if (a != 0)
    {
        b=1;
    }
    else
    {
        b=0;
    }
printf("\n%d\n",b);

//ma dokładnie taki sam efekt jak:

b = (a !=0) ? 1:0;
printf("\n%d\n",b);
}


return 0;
}
