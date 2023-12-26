#include <stdio.h>
#include <stdlib.h>

void topla(int n,int *x)
{
    if(n>=0)
    {
        *x=*x+n;
        topla(n-1,x);
    }
}
int main()
{
    int sayi,toplam=0;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    topla(sayi,&toplam);
    printf("%d",toplam);
    return 0;
}
