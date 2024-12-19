#include<stdio.h>
int main()
{
    int N,i,x;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        x=1;
        x=N*i;
        printf("%d x %d = %d\n",i,N,x);
    }
    return 0;
}
