#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("Top 1\n");
    else if(n>1&&n<4)
        printf("Top 3\n");
    else if(n>3&&n<6)
        printf("Top 5\n");
    else if(n>5&&n<11)
        printf("Top 10\n");
    else if(n>10&&n<26)
        printf("Top 25\n");
    else if(n>25&&n<51)
        printf("Top 50\n");
    else if(n>50&&n<101)
        printf("Top 100\n");
    else
            printf("Enter the value again");

    return 0;
}
