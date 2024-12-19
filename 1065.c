#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int C=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2==0)
    {
        C++;
    }
    if(b%2==0)
    {
        C++;
    }
    if(c%2==0)
    {
        C++;
    }
    if(d%2==0)
    {
        C++;
    }
    if(e%2==0)
    {
        C++;
    }
    printf("%d valores pares\n",C);
        return 0;
}
