#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,R1,R2,X;
    scanf("%lf%lf%lf",&A,&B,&C);
    X=(B*B)-(4*A*C);
    if(A!=0&&X>0)
    {
         X=sqrt(X);
         R1=(-B+X)/(2*A);
         R2=(-B-X)/(2*A);
     printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
     else
     {
   printf("Impossivel calcular\n");
     }
    return 0;
}
