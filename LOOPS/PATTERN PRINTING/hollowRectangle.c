/*
*****
*   *
*****
*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter no of rows : ");
    scanf("%d",&m);
    printf("enter no of columns : ");
    scanf("%d",&n);
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==m || j==1 || j==n)
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


    return 0;
}