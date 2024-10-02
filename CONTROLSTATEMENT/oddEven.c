//check whether a number is even or odd
#include<stdio.h>
int main()
{
    int numb;
    printf("enter a number : ");
    scanf("%d",&numb);

    if((numb%2)==0)
    {
        printf("even");
    }

    if((numb%2)!=0)
    {
        printf("odd");
    }


    return 0;
}