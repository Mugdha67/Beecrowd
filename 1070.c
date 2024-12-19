#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=12;i++)
    {
        if(x%2==1)
            printf("%d\n",x);
            x++;
    }
    return 0;
}
