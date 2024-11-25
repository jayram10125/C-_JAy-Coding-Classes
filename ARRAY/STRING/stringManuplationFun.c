#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50]="ram";
    char str2[50]="ram";

    /*strlen()
    int length=strlen(str);
    printf("length of string is %d",length);*/
    // puts(str2);


    /*strcpy()
    strcpy(str2,str1);
    puts(str2);*/

    /*strncat()
    strncat(str1,str2,2);
    puts(str1);*/

    /*strcmp()*/
    int r = strcmp(str1,str2);
    if(r==0)
    puts("equal");
    if(r==1)
    puts("str 1 is grater");
    if(r==-1)
    puts("str2 is grater");





    return 0;
}