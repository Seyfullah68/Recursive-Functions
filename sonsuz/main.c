#include <stdio.h>
#include <stdlib.h>


void sonsuz()
{
    int a;
    scanf("%d",&a);
    if(a !=0)
    {

     return sonsuz(a);
    }
    else
        return 0;
}
int main()
{


    sonsuz();
    return 0;
}
