#include<stdio.h>
int main()
{
    int a,sum,i;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        sum=0;
        if(a%2==0)
        {
            for(i=a;i<a+10;i+=2)
            {
                sum=sum+i;
            }
        }
        else
        {
            for(i=a+1;i<=a+10;i+=2)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
