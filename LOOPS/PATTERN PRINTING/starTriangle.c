#include<stdio.h>
int main()
{
    int size;
    printf("enter size of triangle : ");
    scanf("%d",&size);

    for(int i=1;i<=size;i++)//5
    {
        
        for(int j=1;j<=i;j++)
        {
            
            printf(" *");
            
        }
        printf("\n");
    }
    return 0;
}