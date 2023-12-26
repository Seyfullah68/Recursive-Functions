#include <stdio.h>
#include <stdlib.h>

void yazdir(int *n)
{
    if(*n==0)
    {
        printf("%d",*n);
    }
    else
    {
        printf("%d\n",*n);
        *n=*n-1;
        yazdir(n);
    }
}
int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    yazdir(&sayi);
    return 0;
}
