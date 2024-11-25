#include<stdio.h>
int main()
{
    //char str[5]={'a','p','p','l','e'};
    char str[50];
    printf("enter a string : ");
    //scanf("%s",&str);
    gets(str);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%c",str[i]);
    // }
    //printf("%s",str);
    puts(str);


    return 0;
}