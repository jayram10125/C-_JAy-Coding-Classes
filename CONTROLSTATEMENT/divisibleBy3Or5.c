//check a number is divisible by 5 or 3
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d",&n);

    if(n%3==0 || n%5==0)
    {
        printf("divisible by 5 or 3");
    }
    else{
        printf("not divisible by 5 or 3");
    }


    return 0;
}
