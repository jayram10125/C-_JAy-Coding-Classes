#include<stdio.h>
int main()
{
    int n ,count=0;
    printf("enter n : ");
    scanf("%d",&n);

    while(n!=0) // n=123 //n=12 /n=1 /n=0
    {
        n=n/10;  //n=123/10=12  , 12/10=1, 1/10=0
        count++;  // 1++=2 ,2++=3
    }

    printf("%d",count);


    return 0;
}