//Display this AP 1,3,5,7,9,... upto n
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter n : "); //an=a+(n-1)*d   , 1+(n-1)*2= 2n-1
    scanf("%d",&n);

    for(int i=1;i<=(2*n-1);i=i+2) //49<=49   51<=49
    {
        printf("%d ",i);
    }



    return 0;
}