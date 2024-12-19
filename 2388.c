#include<stdio.h>
int main()
{
    int t,D=0,d;
    scanf("%d",&t);
    while(t--)
    {
        int h,v;
        scanf("%d%d",&h,&v);
        d=h*v;
        D=D+d;
    }
    printf("%d\n",D);
    return 0;
}
