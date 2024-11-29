#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr=NULL;
    char ch[1500];
    fptr=fopen("d://file jay/student.txt","r");
    // fputs("i love c \n" ,fptr );
    // fputs("c programming by jay coding classes is the best",fptr);
    if(fptr==NULL)
    {
        printf("file not created");
    }
    else
    {
        while(fgets(ch,1500,fptr))//while(8)
        {
            
        printf("%s",ch);
        }
       
    }
    fclose(fptr); /*this is an important part , we have to close the opened file to protect out data , 
                     and we have to just pass  the file pointer name as an argument*/


    return 0;
}