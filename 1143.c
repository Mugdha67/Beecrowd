#include<stdio.h>
int main()
{
    int N,S,C,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
    S=i*i;
    C=i*i*i;
    printf("%d %d %d\n",i,S,C);
    }
    return 0;
}
