#include<stdio.h>
int main()
{
    int a[10],i,o=0,e=0,p=0,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("%d valor(es) par(es)\n\
%d valor(es) impar(es)\n\
%d valor(es) positivo(s)\n\
%d valor(es) negativo(s)\n",e,o,p,n);
    return 0;
}
