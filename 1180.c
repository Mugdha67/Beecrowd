#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x,y;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(i=1;i<n;i++)
    {
        if(x>a[i])
        {
            x=a[i];
            y=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",x,y);
    return 0;
}
