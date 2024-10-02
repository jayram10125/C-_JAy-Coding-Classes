//check triangle is equilateral,isoceles,obtuse
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter side length : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==c&&a==b)
    {
        printf("equi");
    }
    else if(((a==b)&&(a!=c&&b!=c))||((b==c)&&(b!=a&&c!=a))||((c==a)&&(c!=b&&a!=b)))
    {
        printf("iso");
    }
    else{
        printf("scalane");
    }


    return 0;
}