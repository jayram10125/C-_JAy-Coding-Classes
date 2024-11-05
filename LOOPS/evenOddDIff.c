//find the difference of sum of all the even and odd digit of a given number
#include<stdio.h>
int main()
{
    int n,a ,esum=0 ,osum=0;
    printf("enter n : "); //26576     6+6+2-7+5=14-12=2
    scanf("%d",&n);

    while(n!=0)  
    {
        a=n%10; 
        n=n/10;
        if(a%2==0)
        {
            esum=esum+a;
        }
        else
        {
            osum=osum+a;
        }
        
    }
    
    printf("%d",esum-osum);

    return 0;
}