#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <direct.h>
#define w 10            //ilosc wierszy
#define k 20            //ilosc kolumn
#define p 20            //ilosc powtorzen    iterations

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
srand(time(0));
int t[w][k],t2[w][k];
int i,j,pow=0,test=0,x,z=0;               //i-wiersze   j-kolumny   pow-iteracje   x-wypisywanie   z-ilosc_iteracji
char y;                                   //y-kolejny_pakiet_iteracji

for(i=0;i<w;i++)       //losowanie tablicy 1   i  zerowanie tablicy 2
{
    for(j=0;j<k;j++)
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

    for(i=0;i<w;i++)       //drukowanie tablicy 1
    {
        for(j=0;j<k;j++)
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


    for(i=0;i<w;i++)        //liczenie
    {
        for(j=0;j<k;j++)        //przejscie przez wszystkie elementy tablicy
        {

            if(i==0&&j==0)            //pozycja   (0,0)
            {
                test=t[0][1]+t[1][0]+t[1][1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                       //pozycja   (0,0)

            if(i==0&&j==k-1)          //pozycja   (0,k)
            {
                test=t[0][k-2]+t[1][k-2]+t[1][k-1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                       //pozycja   (0,k)

            if(i==w-1&&j==0)          //pozycja   (w,0)
            {
                test=t[w-2][0]+t[w-2][1]+t[w-1][1];

                if(t[i][j]==176)   //if dead    check for 3 alive neighbours    must be 3
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
            }                       //pozycja   (w,0)

            if(i==w-1&&j==k-1)        //pozycja   (w,k)
            {
                test=t[w-2][k-2]+t[w-2][k-1]+t[w-1][k-2];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                       //pozycja   (w,k)

            if(i==0&&j>0&&j<k-1)      //gorna krawendz macierzy
            {
                test=t[i][j-1]+t[i][j+1]+t[i+1][j-1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                       //gorna krawendz macierzy

            if(i==w-1&&j>0&&j<k-1)    //dolna krawendz macierzy
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i-1][j+1]+t[i][j-1]+t[i][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                         //dolna krawendz macierzy

            if(i>0&&i<w-1&&j==0)      //lewa krawendz macierzy
            {
                test=t[i-1][j]+t[i-1][j+1]+t[i][j+1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                         //dolna krawendz macierzy

            if(i>0&&i<w-1&&j==k-1)    //prawa krawendz macierzy
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i][j-1]+t[i+1][j-1]+t[i+1][j];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                         //prawa krawendz macierzy

            if(i>0&&i<w-1&&j>0&&j<k-1)    //srodek macierzy
            {
                test=t[i-1][j-1]+t[i-1][j]+t[i-1][j+1]+t[i][j-1]+t[i][j+1]+t[i+1][j-1]+t[i+1][j]+t[i+1][j+1];

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3
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
            }                         //srodek macierzy
        }
    }


    for(i=0;i<w;i++)       //zamienianie ukladu tablicy 1
    {
        for(j=0;j<k;j++)
        {
            if(t2[i][j]==0)
            {
                t[i][j]=0;
            }
            else
            {
                t[i][j]=1;
            }
        }
    }


    for(i=0;i<w;i++)       //zerowanie tablicy 2 przed kolejna iteracja
    {
        for(j=0;j<k;j++)
        {
            t2[i][j]=0;
        }
    }

delay(200);                //control how fast it runs
++pow;
}while(pow<p);

z=z+pow;
printf("\nDo you want to continue?  \n(y/n) ");
fflush(stdin);
scanf("%c",&y);
printf("\n");
}while(y == 'y');
return 0;
}
