#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m,o;
        scanf("%d%d%d",&h,&m,&o);

            if(h<10&&m<10){
            printf("0%d:0%d",h,m);
            }
            else if(h<10)
            {
                 printf("0%d:%d",h,m);
            }
            else if(m<10)
            {
                 printf("%d:0%d",h,m);
            }
            else
            {
                 printf("%d:%d",h,m);
            }
             if(o==1)
        {
            printf(" - A porta abriu!\n");
        }
        else
        {
            printf(" - A porta fechou!\n");
        }
    }
    return 0;
}
