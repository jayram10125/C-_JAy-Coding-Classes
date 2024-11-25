#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d value : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("right order : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nreverse order : ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }


    return 0;

}