#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d",&a);
        b=a%2;
        printf("%d\n",b);
    }
    return 0;
}
