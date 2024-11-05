//check a number is palindrome or not
#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("enter n : "); 
    scanf("%d",&n);
    int p=n;

    while (n!=0)
    {
        a=n%10;
        n=n/10;
        rev=rev*10+a;
    }

    if(p==rev)
    {
        printf("it is palindrome");  //123==321 ,121=121
    }
    else
    {
        printf("it is not palindrome");
    }
    
    return 0;
}