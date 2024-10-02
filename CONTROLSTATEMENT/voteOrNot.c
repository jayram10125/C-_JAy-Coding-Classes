//check you are elegible for voting or not
#include<stdio.h>
int main()
{
    int age;
    printf("enter you age : ");
    scanf("%d",&age);

    if(age>=18)
    {
    printf("you are elegible\n");
    printf("now you can vote ");
    }
    if(age<18)
    {
    printf("you are not elegible");
    }



    return 0;
}