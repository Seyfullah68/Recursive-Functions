#include <stdio.h>
#include <stdlib.h>

int carp(int x,int y)
{

    while(y>0)
    {


        return x+carp(x,y-1);
    }

}
int main()
{
    int a,b;
    printf("iki adet sayi giriniz\n");
    scanf("%d %d",&a,&b);
    printf("%d",carp(a,b));

    return 0;
}
