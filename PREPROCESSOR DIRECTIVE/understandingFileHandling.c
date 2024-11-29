#include<stdio.h>
#define pi 3.14
#define pf printf
int main()
{
    float r =7.12; //3.14*r*r
    
    pf("area is %.2f",pi*r*r);

     #undef pf

    #ifdef pi
    pf("\nmacros declared");
    #else
    pf("\nmacros not declared");
    #endif



    return 0;
}
