#include<stdio.h>
int main()
{
    int a,sum=0,c=0;
    float avg;
    while(scanf("%d",&a)==1)
    {
        if(a<0)
            break;

        c++;
        sum=sum+a;
    }
    avg=(float)sum/c;
    printf("%.2f\n",avg);
    return 0;
}
