#include<stdio.h>
int main()
{
    char name[1000];
    float salary;
    double sell,bonus;
    gets(name);
    scanf("%f%lf",&salary,&sell);
    bonus=salary+((sell*15)/100);
    printf("TOTAL = R$ %.2lf\n",bonus);
    return 0;
}
