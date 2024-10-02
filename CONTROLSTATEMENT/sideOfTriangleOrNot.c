//check side of triangle or not

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter side length : ");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b>=c)&&(b+c>=a)&&(c+a>=b))
    {
        printf("can form triangle");
    }
    else{
        printf("cant form a triangle");
    }


    return 0;
}