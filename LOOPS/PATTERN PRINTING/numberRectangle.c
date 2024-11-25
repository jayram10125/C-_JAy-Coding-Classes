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
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}