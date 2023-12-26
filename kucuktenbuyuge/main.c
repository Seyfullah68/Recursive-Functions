#include <stdio.h>
#include <stdlib.h>

void sirala(int seri[],int boy)
{
    int tut;
    if(boy>0)
    {
        for(int i=0;i<boy-1;i++)
        {
            if(seri[i]>seri[i+1])
            {
                tut=seri[i];
                seri[i]=seri[i+1];
                seri[i+1]=tut;
            }

        }
        sirala(seri,boy-1);

    }

}
void bastir(int ser[],int x)
{
    int i=0;
    int *p;
    p=ser;
    while(i<x)
    {
        printf("%d\t",*p);
        i++;
        p++;
    }
}
int main()
{
    int n,i;
    printf("kac adet sayi olacak\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("dizimiz\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);

    }
    printf("\n");
    sirala(dizi,n);
    bastir(dizi,n);
    return 0;
}
