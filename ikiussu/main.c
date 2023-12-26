#include <stdio.h>
#include <stdlib.h>


int ussu(int x)
{
    if(x>0)
    {
       return 2*ussu((x-1));
    }
    else
        return 1;
}
int main()
{
    int sayi,i=0;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    for(i=0;i<=sayi;i++)
    {
        printf("%d\n",ussu(i));
    }

    return 0;
}
