#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i,flag=1;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        if(n%i==0)
    {
        flag=0;
    break;
    }
    if(flag==1)
        printf("%d eh primo\n",n);
        else
        printf("%d nao eh primo\n",n);
    }
    return 0;
}
