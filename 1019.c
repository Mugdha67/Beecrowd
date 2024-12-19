#include<stdio.h>
int main()
{
    int N,h,m,s;
    scanf("%d",&N);
    h=N/3600;
    printf("%d:",h);
    h=N-(h*3600);
    m=h/60;
    printf("%d:",m);
    m=h-(m*60);
    s=m/1;
    printf("%d\n",s);
    return 0;
}
