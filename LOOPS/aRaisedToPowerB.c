#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,power=1;
    printf("enter base : ");
    scanf("%d",&a);
    printf("enter power : ");
    scanf("%d",&b);
    //printf("%d",pow(a,b));
    // int power=pow(a,b);
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d",power);
    

    return 0;
}