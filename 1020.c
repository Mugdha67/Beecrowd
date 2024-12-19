#include<stdio.h>
int main()
{
    int N,y,m,d;
    scanf("%d",&N);
    y=N/365;
    printf("%d ano(s)\n",y);
    y=N-(y*365);
    m=y/30;
    printf("%d mes(es)\n",m);
    m=y-(m*30);
    d=m/1;
    printf("%d dia(s)\n",d);
    return 0;
}
