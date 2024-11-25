#include<stdio.h>
int main()
{
    // int age=10;
    // int age;
    // age=10;
    //  int age[10]={5,6,9,8,7,8,9,11,23,10};

    //  for(int i=0;i<=9;i++)
    //  {
    //     printf("%d ",age[i]);
    //  }

    //  int num;
    //  printf("enter a number : ");
    //  scanf("%d",&num);
    //  printf("%d",num);

      
    // printf("%d ",age[0]);
    // printf("%d ",age[1]);
    // printf("%d ",age[2]);
    // printf("%d ",age[3]);
    // printf("%d ",age[4]);

    int age[5];
    // printf("Enter 5 age value: ");
    for(int i=0;i<=4;i++)

     {
        printf("enter index %d value : ",i);
        scanf("%d",&age[i]);
     }
    printf("our output is : ");
     for(int i=0;i<=4;i++)
     {
        printf("%d ",age[i]);
     }

    
    
    

    
    


    return 0;
}