// 1-2+3-4+5-6+7.-8+9-10...  25-30=-5
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter term : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }
    printf("%d",sum);

    return 0;
}