#include<stdio.h>
int main()
{
    
    int e,h;
    int avg;
    eng :printf("enter marks of english : ");
    scanf("%d",&e);
    if(e<0||e>=100)
    {
        printf("please enter valid marks :\n ");
        goto eng;
    }
   
     hin : printf("enter marks of hindi : ");
    scanf("%d",&h);
    if(h<0||h>=100)
    {
        printf("please enter valid marks :\n ");
        goto hin;
    }

    avg=(h+e)/2;
    printf("avg=%d",avg);
    return 0;
}