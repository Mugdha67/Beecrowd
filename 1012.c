#include<stdio.h>
int main()
{
    double A,B,C,p1,p2,p3,p4,p5;
    scanf("%lf%lf%lf",&A,&B,&C);
    p1=0.5*A*C;
    p2=3.14159*C*C;
    p3=0.5*C*(A+B);
    p4=B*B;
    p5=A*B;
    printf("TRIANGULO: %.3lf\n",p1);
    printf("CIRCULO: %.3lf\n",p2);
    printf("TRAPEZIO: %.3lf\n",p3);
    printf("QUADRADO: %.3lf\n",p4);
    printf("RETANGULO: %.3lf\n",p5);
    return 0;
}
