#include<stdio.h>
int main()
{
    int X,Y;
    double R;
    scanf("%d%d",&X,&Y);
    if(X==1)
    {
        R=Y*4.00;
        printf("Total: R$ %.2lf\n",R);
    }
     else if(X==2)
     {
        R=Y*4.50;
        printf("Total: R$ %.2lf\n",R);
     }
    else if(X==3)
    {
        R=Y*5.00;
        printf("Total: R$ %.2lf\n",R);
    }
    else if(X==4)
    {
        R=Y*2.00;
        printf("Total: R$ %.2lf\n",R);
    }
    else if(X==5)
    {
        R=Y*1.50;
        printf("Total: R$ %.2lf\n",R);
    }
    else
    {
        printf("Enter the value again\n");
    }
    return 0;
}
