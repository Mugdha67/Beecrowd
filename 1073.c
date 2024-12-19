#include<stdio.h>
int main()
{
    long long int N,a,i;
    scanf("%lld",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            a=i*i;
            printf("%lld^2 = %lld\n",i,a);
        }
    }
    return 0;
}
