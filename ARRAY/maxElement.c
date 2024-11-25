#include<stdio.h>
int main()
{
    int arr[6]={4,8,9,1,14,16};
    int max=arr[0];
    for(int i=1;i<6 ;i++)
    {
        if(max < arr[i]) // 4 < 8 , 8<9 ,9<1 ,9 < 14 ,14 < 6
        {
            max=arr[i];
        }
    }
    printf("max is %d ",max);


    return 0;
}