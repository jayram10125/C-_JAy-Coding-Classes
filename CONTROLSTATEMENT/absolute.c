//find absolute value
#include<stdio.h>
int main()
{
    int n;
    printf("enter a n  : ");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("absolute value is :%d ",n);
    }
    else{
        printf("absolute value is :%d",(-1)*n);
    }
    


    return 0;
}