//convert a digit into words
//123 ...  one two three
#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter a number : ");
    scanf("%d",&n); //123 ... 321

    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r; 
    }
    //printf("%d",rev);

    while (rev!=0)
    {
        r=rev%10;

        switch(r)
        {
            case 1 : printf("one ");break;
            case 2:printf("two ");break;
            case 3:printf("three ");break;
            case 4:printf("four ");break;
            case 5 :printf("five ");break;
            case 6: printf("six ");break;
            case 7 :printf("seven ");break;
            case 8 :printf("eight ");break;
            case 9 :printf("nine ");break;
            default :printf("zero ");break;
        }
        rev=rev/10;

    }
    

    

    return 0;
}