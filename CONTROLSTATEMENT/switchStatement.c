//basic calculator
#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter choice : ");
    scanf("%c",&ch);
    printf("enter first number : ");
    scanf("%d",&a);
    
    printf("enter second number : ");
    scanf("%d",&b);

    switch (ch)
    {
    case '+':
        printf("addition is %d ",a+b);
        break;
    case '-':
        printf("subtraction is %d ",a-b);
        break;
    case '*':
        printf("product is %d ",a*b);
        break;
    case '/':
        printf("division is  %d ",a/b);
        break;

    default:
        printf("please enter you valid choice");
        break;
    }



    return 0;
}