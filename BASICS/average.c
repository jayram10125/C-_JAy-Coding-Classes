//find average of 5 subject marks each of 60.
#include<stdio.h>
int main()
{
    float h,e,m,c,s,avg;
    printf("enter hindi marks : ");
    scanf("%f",&h);
    printf("enter english marks : ");
    scanf("%f",&e);
    printf("enter math marks : ");
    scanf("%f",&m);
    printf("enter computer marks : ");
    scanf("%f",&c);
    printf("enter science marks : ");
    scanf("%f",&s);

    avg=(h+e+m+c+s)/5;

    printf("avg=%.1f",avg);

    return 0;
}
