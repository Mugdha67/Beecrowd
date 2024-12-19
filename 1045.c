#include<stdio.h>
int main()
{
    double A,B,C,d,e,f,t;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(B>A)
    {
        t=B;
        B=A;
        A=t;
    }
    if(C>A)
    {
        t=C;
        C=A;
        A=t;
    }
    d=A*A;
    e=B*B;
    f=C*C;
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(d==(e+f))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(d>e+f)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(d<e+f)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B&&B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((A!=B&&B==C)||(A!=B&&A==C)||(C!=B&&B==A))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
