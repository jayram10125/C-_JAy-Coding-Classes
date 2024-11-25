#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of  array : " );
    scanf("%d",&n);
    float arr[n];
    printf("enter the %d elements of array : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }

    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum is %f",sum);
    float avg =sum/n; //4/3
    printf("\n average is %f",avg);

    return 0;
}