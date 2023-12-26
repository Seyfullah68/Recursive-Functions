#include <stdio.h>
#include <stdlib.h>

int fibo(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return (fibo(x-1)+fibo(x-2));
    }
}

int main()
{
    int sayi,i;
    printf("kac adet sayi uretilecek\n");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}
