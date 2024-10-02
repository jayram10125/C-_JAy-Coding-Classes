//compare area and perimetre of rectangle

#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("enter the length of rectangle : ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle : ");
    scanf("%d",&b);
    area=l*b;//12
    peri=2*(l+b);//14
    if(area>peri)
    {
        printf("area is grater");
    }
    if(area>peri)
    {
        printf("area is grater");
    }
    else if(peri > area)
    {
        printf("peeri is grater");
    }
    else
    {
        printf("area and peri is equal");
    }



    return 0;
}