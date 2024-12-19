#include<stdio.h>
int main()
{
    int m,n,t,i,sum;
    while(scanf("%d%d",&m,&n)==2)
    {
        if(m<=0||n<=0)
        {
            break;
        }
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        sum=0;
        for(i=m;i<=n;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
