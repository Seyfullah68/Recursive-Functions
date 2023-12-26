#include <stdio.h>
#include <stdlib.h>

void asal(int x)
{
    int i,sonuc=1;
    for (i=2;i<x;i++)
    {
        if(x%i==0)
        {
            sonuc=0;
        }
    }
    if(sonuc==1)
    {
        printf("%d\n",x);
    }
    if(x==2)
    {
       // printf("2\n");
        return 0;
    }
    asal(x-1);
}
int main()
{
    int n,i,kontrol;
    printf("sayiyi giriniz\n");
    scanf("%d",&n);


       asal(n);

    return 0;
}
