#include<stdio.h>
int main()
{
    
    int n;
    printf("please enter an odd number : ");
    scanf("%d",&n);
if(n%2!=0)
{    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
else
{
    printf("please enter an odd number");
}
    
    return 0;
}