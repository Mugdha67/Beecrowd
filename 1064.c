#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,avg,sum=0;
    int C=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>0)
    {
        C++;
        sum=sum+a;
    }
    if(b>0)
    {
        C++;
        sum=sum+b;
    }
    if(c>0)
    {
        C++;
        sum=sum+c;
    }
    if(d>0)
    {
        C++;
        sum=sum+d;
    }
    if(e>0)
    {
        C++;
        sum=sum+e;
    }
    if(f>0)
    {
        C++;
        sum=sum+f;
    }
    avg=(sum)/(C*1.0);
    printf("%d valores positivos\n",C);
    printf("%.1f\n",avg);
        return 0;
}
