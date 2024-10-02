//check a number is three digit or not 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number  : ");
    scanf("%d",&n);


    if(n>99&&n<1000)
    {
        printf("3 digit");
    }
    else{
        printf("not 3 digit");

    }


    return 0;
}