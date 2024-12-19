#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=4*i-3;j<=4*i;j++)
        {
            if(j%4==0)
            {
                printf("PUM\n");
                break;
            }
            printf("%d ",j);
        }
    }
    return 0;
}
