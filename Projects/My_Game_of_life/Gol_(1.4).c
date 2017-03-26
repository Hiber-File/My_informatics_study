#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <direct.h>
#define W 10            //number of rows
#define K 20            //number of columns
#define P 20            //number of repetitions

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(void)
{
srand(time(0));
int t[W][K],t2[W][K];
int i,j,pow=0,test=0,x,z=0;               //i-rows   j-columns   pow-repetitions   x-printing   z-repetitions counter
char y;                                   //y-another round of repetitions

for(i=0;i<W;i++)       //drawing numbers for array 1   and  reset of array 2
{
    for(j=0;j<K;j++)
    {
        t[i][j]=rand()%2;
        t2[i][j]=0;
    }
}

printf("Ulozenie poczatkowe:\n");
do
{
pow=0;
do
{
printf("Iteration=%d\n",pow+1+z);

    for(i=0;i<W;i++)       //printing array 1
    {
        for(j=0;j<K;j++)
        {
            if(t[i][j]==0)
            {
                x=176;
                printf("%c ",x);
            }
            else
            {
                x=178;
                printf("%c ",x);
            }
        }
        printf("\n\n");
    }

    for(i=0;i<W;i++)        //counting
    {
        for(j=0;j<K;j++)
        {
            if(i==0&&j==0)            //position   (0,0)   upper left corner
            {
                test=t[0][1]+t[1][0]+t[1][1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors     must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                       //position   (0,0)   upper left corner

            if(i==0&&j==K-1)          //position   (0,K)    upper right corner
            {
                test=t[0][K-2]+t[1][K-2]+t[1][K-1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                       //position   (0,K)    upper right corner

            if(i==W-1&&j==0)          //position   (W,0)    bottom left corner
            {
                test=t[W-2][0]+t[W-2][1]+t[W-1][1];

                if(t[i][j]==176)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                       //position   (W,0)    bottom left corner

            if(i==W-1&&j==K-1)        //position   (W,K)    bottom right corner
            {
                test=t[W-2][K-2]+t[W-2][K-1]+t[W-1][K-2];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                       //position   (W,K)    bottom right corner)

            if(i==0&&j>0&&j<K-1)      //upper row of matrix
            {
                test=t[i][j-1]+t[i][j+1]+t[i+1][j-1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                       //upper row of matrix

            if(i==W-1&&j>0&&j<K-1)    //bottom row of matrix
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i-1][j+1]+t[i][j-1]+t[i][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                         //bottom row of matrix

            if(i>0&&i<W-1&&j==0)      //left column of matrix
            {
                test=t[i-1][j]+t[i-1][j+1]+t[i][j+1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                         //left column of matrix

            if(i>0&&i<W-1&&j==K-1)    //right column of matrix
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i][j-1]+t[i+1][j-1]+t[i+1][j];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                         //right column of matrix

            if(i>0&&i<W-1&&j>0&&j<K-1)    //middle of matrix
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i-1][j+1]+t[i][j-1]+t[i][j+1]+t[i+1][j-1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbors    must be 3
                {
                    if(test==3)
                    {
                        t2[i][j]=1;
                    }
                }
                else                //if alive check for 2-3 alive
                {
                    if(test==2||test==3)
                    {
                        t2[i][j]=1;
                    }
                }
            }                         //middle of matrix
        }
    }

    for(i=0;i<W;i++)       //calculating new positions in array 1   and reset of array 2
    {
        for(j=0;j<K;j++)
        {
            if(t2[i][j]==0)
            {
                t[i][j]=0;
                t2[i][j]=0;
            }
            else
            {
                t[i][j]=1;
                t2[i][j]=0;
            }
        }
    }

delay(350);                //control how fast it runs
++pow;
}while(pow<P);

z=z+pow;
printf("\nDo you want to continue?  \n(y/n) ");
fflush(stdin);
scanf("%c",&y);
printf("\n");
}while(y == 'y');
return 0;
}
