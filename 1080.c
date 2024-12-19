#include<stdio.h>
int main()
{
    int i,n[100],m=0,j=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n[i]);
        if(m<n[i])
        {
            m=n[i];
            j=i;
        }
    }
    printf("%d\n%d\n",m,j);
    return 0;
}
