#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#define w 10            //ilosc wierszy
#define k 20            //ilosc kolumn
#define p 100            //ilosc powtorzen    kolejnych tur

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
int t[w][k],t2[w][k];
int i,j,pow=0,test=0,x,y;

for(i=0;i<w;i++)       //zerowanie tablicy 1
{
    for(j=0;j<k;j++)
    {
        t[i][j]=0;
        t2[i][j]=0;
    }
}

//test
//test  (0,0)
t[0][1]=1;
t[1][0]=1;
t[1][1]=1;
//test  (0,k)
t[0][k-2]=1;
t[1][k-2]=1;
t[1][k-1]=0;
//test  (w,0)
t[w-2][0]=1;
t[w-2][1]=1;
t[w-1][1]=1;
//test  (w,k)
t[w-2][k-2]=1;
t[w-2][k-1]=1;
t[w-1][k-2]=1;
//test górna krawendz macierzy
t[1][2]=1;
t[1][3]=1;
t[1][4]=1;
//test dolna krawendz macierzy
t[w-2][2]=1;
t[w-2][3]=1;
t[w-2][4]=1;
//test lewa krawendz macierzy
t[2][1]=1;
//test prawa krawendz macierzy
t[w-3][k-2]=1;
//test value

printf("Ulozenie poczatkowe:\n");

do
{
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==176)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

                if(t[i][j]==0)   //if dead    check for 3 alive neighbours    must be 3*178=534
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

delay(400);
printf("\n");
++pow;
}while(pow<p);

return 0;
}
