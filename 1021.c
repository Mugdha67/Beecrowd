#include<stdio.h>
int main()
{
    double n;
    int N,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12;
    scanf("%lf",&n);
    N=n*100;
    p1=N/10000;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",p1);
    p1=N-(p1*10000);
    p2=p1/5000;
    printf("%d nota(s) de R$ 50.00\n",p2);
    p2=p1-(p2*5000);
    p3=p2/2000;
    printf("%d nota(s) de R$ 20.00\n",p3);
    p3=p2-(p3*2000);
    p4=p3/1000;
    printf("%d nota(s) de R$ 10.00\n",p4);
    p4=p3-(p4*1000);
    p5=p4/500;
    printf("%d nota(s) de R$ 5.00\n",p5);
    p5=p4-(p5*500);
    p6=p5/200;
    printf("%d nota(s) de R$ 2.00\n",p6);
    p6=p5-(p6*200);
    p7=p6/100;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",p7);
    p7=p6-(p7*100);
    p8=p7/50;
    printf("%d moeda(s) de R$ 0.50\n",p8);
    p8=p7-(p8*50);
    p9=p8/25;
    printf("%d moeda(s) de R$ 0.25\n",p9);
    p9=p8-(p9*25);
    p10=p9/10;
    printf("%d moeda(s) de R$ 0.10\n",p10);
    p10=p9-(p10*10);
    p11=p10/5;
    printf("%d moeda(s) de R$ 0.05\n",p11);
    p11=p10-(p11*5);
    p12=p11/1;
    printf("%d moeda(s) de R$ 0.01\n",p12);
    return 0;
}
