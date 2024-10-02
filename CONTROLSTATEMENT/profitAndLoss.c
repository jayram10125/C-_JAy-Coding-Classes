//profit And Loss
#include<stdio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("entes cost price : ");
    scanf("%d",&cp);
    printf("entes selling  price : ");
    scanf("%d",&sp);

    // profit=sp-cp;
    // loss=cp-sp;

    if(sp>cp)
    {
        printf("profit is : %d",sp-cp);
    }
    else if(sp<cp)
    {
        printf("loss is : %d",cp-sp);
    }
    else
    {
        printf("neither loss nor profit");
    }

    
    

    

    return 0;
}