#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)==2)
    {
        if(x==y)
        {
            break;
        }
        if(x>y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }
    return 0;
}
