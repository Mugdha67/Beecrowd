#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d %d",&a,&b,&c);
    d=a,e=b,f=c;
    if(a>b)
    {
        g=a;
        a=b;
        b=g;
    }
    if(b>c)
    {
        g=b;
        b=c;
        c=g;
    }
    if(a>b)
    {
        g=a;
        a=b;
        b=g;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0;
}
