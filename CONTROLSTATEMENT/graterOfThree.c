//grater of three number
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers : ");
    scanf ("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is grater",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d is grater",b);
    }
    else
    {
        printf("%d is grater",c);
    }



    return 0;
}
    