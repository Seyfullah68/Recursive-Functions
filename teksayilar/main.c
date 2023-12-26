#include <stdio.h>
#include <stdlib.h>

void bul(int n)
{
    if(n==1)
    {
        printf("%d\n",n);
        return 1;
    }
    else
    {
        if(n%2==1)
        {
            printf("%d\n",n);
        }
        return bul(n-1);
    }
}
int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    bul(sayi);
    return 0;
}
