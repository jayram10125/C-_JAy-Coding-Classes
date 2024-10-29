//find all the even number from n to m
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter initial value : ");
    scanf("%d",&n);
    printf("enter final  value : ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }



    return 0;
}