//Check a number is prime or Not
#include<stdio.h>
int main()
{   
    int n , f=0 ;
    printf("Enter n : "); 
    scanf("%d",&n);

    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
            
        }
        
    }
    if(n==1)
    {
        printf("neither prime nor non prime");
    }
    else if(f==1)
    {
       printf("not prime"); 
    }
    else{
        printf("prime");
    }

    return 0;
}