#include <stdio.h>
#include <stdlib.h>

int olc(char *p)
{
    if(*p=='\0')
    {
        return 0;
    }
    else
    {
        return 1+olc(p+1);
    }
}
int main()
{
    char dizi[20];
    printf("cumlenizi giriniz\n");
    gets(dizi);
    printf("karakter sayisi: %d",olc(dizi));
    return 0;
}
