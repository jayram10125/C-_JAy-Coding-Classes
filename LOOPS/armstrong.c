
//check a number is armstrong or not
#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter n : "); //153
    scanf("%d",&n);
    int p=n;

    while(n!=0)
    {
        a=n%10;
        n=n/10;
        sum=sum+(a*a*a);
    }
    if(sum==p)
    {
        printf("armstrong");
    }
    else{
        printf("not");
    }
    return 0;
}