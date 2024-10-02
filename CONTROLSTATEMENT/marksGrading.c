/*check grade : 
100-90 => O 
90-80 => A++
80-70 => A+
70-60 => A
60-50 => B
50-40 => C
<40   => fail */

#include<stdio.h>
int main()
{
    int m;
    printf("enter any number : ");
    scanf("%d",&m);

    if(m>90&&m<=100)
    {
        printf("O");
    }

    else if(m>80&&m<=90)
    {
        printf("A++");
    }
    else if(m>70&&m<=80)
    {
        printf("A+");
    }
    else if(m>60&&m<=70)
    {
        printf("A");
    }
    else if(m>50&&m<=60)
    {
        printf("B");
    }
    else if(m>40&&m<=50)
    {
        printf("C");
    }
    else{
        printf("fail");
    }

    return 0;
}