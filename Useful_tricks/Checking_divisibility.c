#include <stdio.h>
int main ()
{
int a = 99;

switch ((a%3))
  {
    case 0:
      printf ("Number %d is divisible by 3\n", a);
      break;
    case -2:
    case -1:                    /*additionally fall-through    just to remember*/
    case 1:
    case 2:
      printf ("Number %d is not divisible by 3\n", a);
      break;
  }

  switch ((a%3))                /*short version*/
  {
    case 0:
      printf ("Number %d is divisible by 3\n", a);
      break;
    default:
      printf ("Number %d is not divisible by 3\n", a);
      break;
  }
  
  
  
  for (i = 1 ; i <= 50 ; ++i)     /*even better method*/
  {
    if (i%3!=0) continue ;
    printf ("%d, ", i);
  }




return 0;
}
