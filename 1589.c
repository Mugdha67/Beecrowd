#include<stdio.h>
int main()
{
    int n;
    long long int r1,r2,R;
    scanf("%d",&n);
    while(n--){
    scanf("%lld%lld",&r1,&r2);
if(r1>0&&r2>0){
    R=r1+r2;
    printf("%lld\n",R);
}

    }
    return 0;
}
