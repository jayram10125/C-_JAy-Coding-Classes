//print the table of n in multiclation form
#include<stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    


    return 0;
}