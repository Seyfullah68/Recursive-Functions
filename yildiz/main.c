#include <stdio.h>
#include <stdlib.h>

void yildiz(int x)
{
    if(x>0)
    {
        for(int i=0;i<x;i++)
        {
            printf("  *");
        }
        printf("\n");
        yildiz(x-1);
    }
}

int main()
{
    int n;
    printf("kac yildiz olacak\n");
    scanf("%d",&n);
    yildiz(n);
    return 0;
}
