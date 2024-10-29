//Display this AP 83,78,73,... upto all +ve number
#include<stdio.h>
int main()
{   
    //83,78,73.......3,-2,-7,-12
    int a=83;
    for(int i=1;i<=17;i++)  
    {
        printf("%d ",a);
        a=a-5;
    }

    return 0;
}