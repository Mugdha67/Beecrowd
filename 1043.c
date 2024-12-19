#include<stdio.h>
int main()
{
    float A,B,C;
    double P,area;
    scanf("%f %f %f",&A,&B,&C);
    if((A+B>C)&&(B+C>A)&&(A+C>B))
    {
        P=A+B+C;
        printf("Perimetro = %.1lf\n",P);
    }
    else
    {
        area=0.5*C*(A+B);
        printf("Area = %.1lf\n",area);
    }
    return 0;
}
