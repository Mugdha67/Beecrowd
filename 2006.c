#include<stdio.h>
int main()
{
    int T,A,B,C,D,E,count=0;
    while(scanf("%d",&T)==1){

        scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);

        if(A==T)
        {
            count++;
        }
        if(B==T)
        {
            count++;
        }
        if(C==T)
        {
            count++;
        }
        if(D==T)
        {
            count++;
        }
        if(E==T)
        {
            count++;
        }
    printf("%d\n",count);
    count=0;
    }
    return 0;
}
