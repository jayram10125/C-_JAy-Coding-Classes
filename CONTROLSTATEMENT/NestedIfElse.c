// check a number is divisible by 5 & 3 by nested if else
//area of rectangle(l*b)
#include<stdio.h>
int main()
{
    int n;
    printf("enter any number  : ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%3==0)
        {
            printf("divisible by 5 and 3");
        }
        else
        {
            printf("not divisible by 5 and 3");
        }
    }
    else{
         printf("not divisible by 5 and 3");
    }




    return 0;
}