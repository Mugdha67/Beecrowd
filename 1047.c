#include<stdio.h>
int main()
{
    int H,M,h,m;
    scanf("%d%d%d%d",&H,&M,&h,&m);
    if(H==h)
    {
        H=24;
        if(M<m)
        {
            M=m-M;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",M);
        }
        else if(M>m)
        {
            M=60-M+m;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H-1,M);
        }
        else
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    }
    else if(H<h)
    {
        H=h-H;
        if(M<m)
        {
            M=m-M;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
        }
        else if(M>m)
        {
            M=60-M+m;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H-1,M);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",H);
        }
    }
    else
    {
        H=24-H+h;
        if(M<m)
        {
            M=m-M;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
        }
        else if(M>m)
        {
            M=60-M+m;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H-1,M);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",H);
        }
    }
    return 0;
}
