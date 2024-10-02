//check the given therr points are collinera or not 
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter first point : ");
    scanf("%d %d",&x1,&y1);
    printf("enter second point : ");
    scanf("%d %d",&x2,&y2);
    printf("enter third point : ");
    scanf("%d %d",&x3,&y3);

    if((x2-x1)/(y2-y1)==(x3-x2)/(y3-y2))
    {
        printf("colliner");
    }
    else
    {
        printf("not collinear");
    }


    return 0;
}