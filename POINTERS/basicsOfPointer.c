#include<stdio.h>
int main()
{
//     int a=10;
//    // a=12;
//    int * x=&a;
// //    printf("%p",x);
// //    printf("\n%d",*x);
//    *x=12;
//    printf("\n%p",x);
//    printf("\n%d",*x);
//    int ** y=&x;
//    printf("%p",y) ;
//    **y=15;
//    printf("\n%d",**y);



int a=10;
int *x  =&a;
printf("%d",&a);
printf("\n%p",&a);
printf("\n%p",x);
printf("\n%p",*x);
    return 0;
}