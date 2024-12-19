#include<stdio.h>
int main()
{
    int X;
    long long int M;
    while(scanf("%d %lld",&X,&M)==2)
    {
        if((X==0)&&(M==0))
        {
            break;
        }
        else
        {
            M=M*X;
            printf("%lld\n",M);
        }
    }
    return 0;
}
