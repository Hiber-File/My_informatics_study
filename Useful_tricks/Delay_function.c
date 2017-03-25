#include <stdio.h>
#include <time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
    
    delay(200);         //delays by 200 miliseconds
    
    
    getchar();          //waits for input+enter/enter
    
    
    for(i=0;i<1000000;++i)
    {
                        //delays by the time of 1000000 incrementations (depends on computer speed)
    };
    
    
    system("pause");   /* oczekiwanie na wciśnięcie dowolnego klawisza */
    
return 0;
}
