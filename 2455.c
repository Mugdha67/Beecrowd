#include<stdio.h>
int main()
{
    int p1,c1,p2,c2,P,C;
    scanf("%d%d%d%d",&p1,&c1,&p2,&c2);
    P=p1*c1;
    C=p2*c2;
    if(P==C)
        printf("0\n");
    else if(P<C)
        printf("1\n");
    else
        printf("-1\n");

    return 0;
}
