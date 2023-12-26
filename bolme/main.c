#include <stdio.h>
#include <stdlib.h>

int bolum(int x,int y)
{
    if(x>=y)
    {
        return 1+bolum(x-y,y);
    }
    else if(x==0)
    {
        return 0;
    }
    else if (y==1)
    {
        return x;
    }
    else
    {
        return 0;
    }

}
int kalan(int x,int y)
{
    if(bolum(x,y)==0)
    {
        return 0;
    }
    else if(x-y<y)
    {
        return x-y;
    }

    else{
        return kalan(x-y,y);
    }
}

int main()
{
    int a,b;
    printf("bolme islemi sayilarini giriniz\n");
    scanf("%d %d",&a,&b);
    printf("bolum:%d , kalan:%d",bolum(a,b),kalan(a,b));
    return 0;
}
