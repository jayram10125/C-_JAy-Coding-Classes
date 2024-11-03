//sum of digit
#include<stdio.h>
int main()
{
    int n,a ,sum=0;
    printf("enter n : ");
    scanf("%d",&n);

    while(n!=0)  //1234,123,12,1,0
    {
        a=n%10; //a=1234%10=4,123%10=3,12%10=2,1%10=1
        n=n/10;//n=1234/10=123,123/10=12,12/10=1,1/10=0
        sum=sum+a;//0+4=4,4+3=7,7+2=9,9+1=10
    }
    printf("%d",sum);

    return 0;
}