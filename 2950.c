#include<stdio.h>
int main()
{
    int n,x,y;
    double a;
    scanf("%d%d%d",&n,&x,&y);
    a=(double)n/(x+y);
    printf("%.2lf\n",a);
    return 0;
}
