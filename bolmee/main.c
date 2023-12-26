#include <stdio.h>
#include <stdlib.h>

int bol(int x,int y)
{
    if(x>=y)
    {
        return 1+bol(x-y,y);
    }
    else
        return 0;
}
int main()
{
    int a,b;
    printf("bolme islemi sayilarini giriniz\n");
    scanf("%d %d",&a,&b);
    printf("bolum sonucu : %d",bol(a,b));
    return 0;
}
