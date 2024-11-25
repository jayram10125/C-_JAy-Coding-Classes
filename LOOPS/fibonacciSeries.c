//fibonacci series
// 0 1 1 2 3 5 8 13 21 34 ....
#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("enter n : ");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d %d ",a,b);
    }
    else if (n>2)
    {
        printf("%d %d ",a,b);
        for(int i=1;i<=n-2;i++)
        {
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }

    return 0;
}