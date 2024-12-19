#include<stdio.h>
int main()
{
    int a,x=0,y=0,z=0;
    while(scanf("%d",&a)==1)
    {
        if(a==4)
            break;

    else
    {
        if(a==1)
            x++;
        else if(a==2)
            y++;
        else if(a==3)
            z++;
    }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",x);
    printf("Gasolina: %d\n",y);
    printf("Diesel: %d\n",z);
    return 0;
}
