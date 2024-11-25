/*
A
A B
A B C
A B C D
*/ 
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n : ");
    scanf("%d",&n);

    //char p =(char)n;

    for( i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;
}