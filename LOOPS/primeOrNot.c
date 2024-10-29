//Check a number is prime or Not
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter n : "); 
    scanf("%d",&n);

    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            printf("not prime number\n");
        }
        else{
            printf("prime\n");
        }
    }



    return 0;
}