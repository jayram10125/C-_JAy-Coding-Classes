#include<stdio.h>
int main()
{
    int size;
    printf("enter size of triangle : ");
    scanf("%d",&size);

    int p=size;
    for(int i=1;i<=size;i++)//5
    {
        // int p=size;5
        for(int j=1;j<=p;j++)
        {
            
            printf("*");
            
        }
        printf("\n");
        p--;
    }
    return 0;
}