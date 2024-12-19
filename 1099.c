#include<stdio.h>
int main()
{
    int t,x,y,tm,i,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            tm=x;
            x=y;
            y=tm;
        }
        for(i=x+1;i<y;i++)
        {
            if((i%2)==1)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
