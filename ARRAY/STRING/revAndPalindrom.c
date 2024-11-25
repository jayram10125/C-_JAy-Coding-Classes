#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50]="mala";
    char str2[strlen(str1)];
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        str2[strlen(str1)-1-i]=str1[i];
    }
    puts(str1);
    puts(str2);
    //printf("%s",str2);

    // for(int i=0;i<strlen(str2);i++)
    // {
    //     printf("%c",str2[i]);
    // }
    // int r=strcmp(str1,str2);
    // if(r==0)
    // {
    //     puts("palindrome");
    // }
    // else{
    //     puts("not palindrome");
    // }




    return 0;
}