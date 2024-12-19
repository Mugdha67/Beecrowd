#include<stdio.h>
int main()
{
    int t,i;
    float a,b,c,avg;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        avg=(a*2+b*3+c*5)/(10*1.0);
        printf("%.1f\n",avg);
    }
    return 0;
}
