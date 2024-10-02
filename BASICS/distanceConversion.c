//take input in KM and convert it into m,cm,inch,and feet

#include<stdio.h>
int main()
{
    
    float km ,m,cm,inch,feet;
    printf("enter the distance in km  : ");
    scanf("%f",&km);

    m=km*1000;
    cm=m*1000;
    inch=cm/2.54;
    feet=inch/12;
     
    printf("m=%f\n",m);
    printf("cm=%f\n",cm);
    printf("inch=%f\n",inch);
    printf("feet=%f\n",feet);

    return 0;
}
