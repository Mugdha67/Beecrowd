#include<stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g;
    scanf("%d",&N);
    printf("%d\n",N);
    a=N/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    a=N-(a*100);
    b=a/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    b=a-(b*50);
    c=b/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    c=b-(c*20);
    d=c/10;
    printf("%d nota(s) de R$ 10,00\n",d);
    d=c-(d*10);
    e=d/5;
    printf("%d nota(s) de R$ 5,00\n",e);
    e=d-(e*5);
    f=e/2;
    printf("%d nota(s) de R$ 2,00\n",f);
    f=e-(f*2);
    g=f/1;
    printf("%d nota(s) de R$ 1,00\n",g);
    return 0;
}
