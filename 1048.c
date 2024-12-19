#include<stdio.h>
int main()
{
    float s,a,e;
    int p;
    scanf("%f",&s);
    if(s>=0&&s<=400.00)
    {
        a=s+(s*0.15);
        e=a-s;
        p=15;
    }
    else if(s>=400.01&&s<=800.00)
    {
        a=s+(s*0.12);
        e=a-s;
        p=12;
    }
    else if(s>=800.01&&s<=1200.00)
    {
        a=s+(s*0.1);
        e=a-s;
        p=10;
    }
    else if(s>=1200.01&&s<=2000.00)
    {
        a=s+(s*0.07);
        e=a-s;
        p=7;
    }
    else
    {
        a=s+(s*0.04);
        e=a-s;
        p=4;
    }
    printf("Novo salario: %.2f\n",a);
    printf("Reajuste ganho: %.2f\n",e);
    printf("Em percentual: %d %%\n",p);
    return 0;
}
