#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
    int x,suma=0;

    FILE *f = fopen("d:/aa/tekst.txt", "r");
    FILE *n = fopen("d:/aa/out1.txt", "w");
    FILE *p = fopen("d:/aa/out2.txt", "w");
    fclose(p);
    fclose(n);

do
{
    fscanf(f,"%d",&x);
    printf("\n%d",x);

if (x==1)
    {
        fopen("d:/aa/out1.txt", "a");
        fprintf(n, "\n%d",x);
        fclose(n);
    }

if (x%2==1)
    {
        fopen("d:/aa/out2.txt", "a");
        fprintf(p, "\n%d",x);
        fclose(p);
    }
if (x%2==0)
    {
        fopen("d:/aa/out1.txt", "a");
        fprintf(n, "\n%d",x);
        fclose(n);
    }


}while(feof(f)==0);

return 0;
}
