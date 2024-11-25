#include<stdio.h>
void swap(int *a ,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10;
    int b=20;
    printf("before swap a=%d ,b=%d ",a,b);

    swap(&a,&b);
    
    printf("\nafter swap a=%d ,b=%d ",a,b);
    
    return 0;
}