#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int i,l;
        char a[101];
        long long int count=0;
        scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='1')
            {
                count=count+2;
            }
            else if(a[i]=='2'||a[i]=='3'||a[i]=='5')
            {
                count=count+5;
            }
            else if(a[i]=='4')
            {
                count=count+4;
            }
            else if(a[i]=='6'||a[i]=='9'||a[i]=='0')
            {
                count=count+6;
            }
            else if(a[i]=='7')
            {
                count=count+3;
            }
            else if(a[i]=='8')
            {
                count=count+7;
            }
        }
        printf("%lld leds\n",count);
    }
    return 0;
}
