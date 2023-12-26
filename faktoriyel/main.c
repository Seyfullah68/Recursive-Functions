#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int x)
{
    if(x==1)
        return 1;
    else
    {
        return x*faktoriyel(x-1);
    }
}
int main()
{
    int sayi;
    printf("sayiyi giriniz\n");
    scanf("%d",&sayi);
    printf("%d",faktoriyel(sayi));
    return 0;
}
