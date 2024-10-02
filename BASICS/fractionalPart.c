//finding fractional part of a real number
#include<stdio.h>
int main()
{

   float x,z;//x=7.4
   int y;
   printf("enter a real number : ");
   scanf("%f",&x);
   y=x;//y=7
   z=x-y;//7.4-7=0.4
   printf("%.1f",z);




    return 0;
}