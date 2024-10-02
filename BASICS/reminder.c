//finding reminder
#include<stdio.h>
int main()
{
    int a,b,quotient,rem;
    printf("b should be grater than a\n");
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b); 


    quotient= b/a;
    rem=b-(quotient*a);
    printf("%d",rem);
    




    return 0;
}