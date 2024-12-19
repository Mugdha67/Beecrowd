#include <stdio.h>

int main() {
    int n,h;
    float s;
    double SALARY;
    scanf("%d%d%f",&n,&h,&s);
    SALARY=h*s;
     printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
