#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cevir(char *cum,int x,int y)
{
    char tut;
    if(y<x)
    {
        tut=cum[y];
        cum[y]=cum[x];
        cum[x]=tut;
        cevir (cum,x-1,y+1);

    }
}
int main()
{
    char cumle[20];
    int *p;
    int n,a=0;
    printf("cumleyi giriniz\n");
    gets(cumle);
    n=strlen(cumle);
    cevir(cumle,n-1,a);

    printf("%s",cumle);

    return 0;
}
