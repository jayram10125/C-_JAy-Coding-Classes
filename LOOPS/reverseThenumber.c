//reverse the given number
#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("enter n : "); //3476887   o/p=7886743
    scanf("%d",&n);

    while (n!=0)
    {
        a=n%10;
        n=n/10;
        rev=rev*10+a;
    }

    printf("%d",rev);
    
    return 0;
}