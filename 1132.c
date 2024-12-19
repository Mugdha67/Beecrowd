#include<stdio.h>
int main()
{
    int x,y,i,sum=0,t;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
