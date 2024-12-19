#include<stdio.h>
int main()
{
    int N,i;
    int x,y,z;
    scanf("%d",&N);
    x=1,y=1,z=1;
    for(i=1;i<=N;i++)
    {
        printf("%d %d %d\n",x,y,z);
        y=y+1;
        z=z+1;
        printf("%d %d %d\n",x,y,z);
        x=x+1;
        y=x*x;
        z=x*x*x;
    }
    return 0;
}
