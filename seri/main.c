#include <stdio.h>
#include <stdlib.h>

void seri(int bas,int son,int art)
{
    if(bas<=son)
    {
      printf("%d\t",bas);
      return seri(bas+art,son,art);
    }
    else
        return 0;
}
int main()
{
    int a,b,c;
    printf("baslangic degeri\n");
    scanf("%d",&a);
    printf("bitis degeri\n");
    scanf("%d",&b);
    printf("artis degeri\n");
    scanf("%d",&c);
    seri(a,b,c);
    return 0;
}
