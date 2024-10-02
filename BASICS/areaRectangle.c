//area of rectangle(l*b)
#include<stdio.h>
int main()
{
    int l,b,area;
    printf("enter the length of rectangle : ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle : ");
    scanf("%d",&b);
    area=l*b;
    printf("area of rectangle with l=%d and b=%d is : %d ", l,b,area);



    return 0;
}