#include<stdio.h>
// void abc();//function declaration
int add(int p ,int q);
int add(int p ,int q)//function defination;
{
    return 2*(p+q);
}

int main()
{
    int a,b,c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    c=add(a,b);
   
    printf("sum is %d ",c);
    
    


    return 0;
}


