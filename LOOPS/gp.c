//Display this GP 1,2,4,8,16,32,... upto n
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter n : "); 
    scanf("%d",&n);

    int a=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a*=2;//a=a*2
    }

    


    return 0;
}