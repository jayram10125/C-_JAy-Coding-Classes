//find percentage of 5 subject marks each of 60.
#include<stdio.h>
int main()
{
    float h,e,m,c,s,per;
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

    per=(h+e+m+s+c)/500*100;

    printf("per=%.1f",per);

    return 0;
}
