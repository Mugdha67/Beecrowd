#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
            if(sum==n)
                printf("%d eh perfeito\n",n);
            else
                printf("%d nao eh perfeito\n",n);
    }
    return 0;
}
