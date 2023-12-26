#include <stdio.h>
#include <stdlib.h>
int ussu(int x,int y)
{
    if(y>0)
        return x*ussu(x,y-1);
    else
        return 1;
}

int main()
{
    int a,b;
    printf("tabani giriniz\n");
    scanf("%d",&a);
    printf("ussu giriniz\n");
    scanf("%d",&b);
    printf("%d",ussu(a,b));
    return 0;
}
