#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x,y,i,sum=0;
        scanf("%d%d",&x,&y);
        if(x%2==0){
        for(i=x+1;i<=x+(y*2);i+=2)
        {
            sum=sum+i;
        }
        }
        else
        {
            for(i=x;i<x+(y*2);i+=2)
        {
            sum=sum+i;
        }
        }
        printf("%d\n",sum);
    }
    return 0;
}
