#include<stdio.h>
int main()
{
    int n,N=1,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        N=N*i;
    }
    printf("%d\n",N);
    return 0;
}
