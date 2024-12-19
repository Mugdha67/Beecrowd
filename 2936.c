#include<stdio.h>
int main()
{
    int c,b,B,m,l,T;
    scanf("%d%d%d%d%d",&c,&b,&B,&m,&l);
    T=(c*300)+(b*1500)+(B*600)+(m*1000)+(l*150)+225;
    printf("%d\n",T);
    return 0;
}
