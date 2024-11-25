#include<stdio.h>
#include<string.h>
int main()
{
    struct employee
    {
        int age;
        char name[50];
        float salary;
    };

    struct employee e1;
    e1.age=25;
    strcpy(e1.name,"ram");
    e1.salary=25000;

    struct employee e2;
    e2.age=29;
    strcpy(e2.name,"ramesh");
    e2.salary=23000;

    printf("age of e1 is : %d",e1.age);
    printf("\nname of e1 is : %s",e1.name);
    printf("\nsalary of e1 is : %.2f",e1.salary);

    printf("\nage of e2 is : %d",e2.age);
    printf("\nname of e2 is : %s",e2.name);
    printf("\nsalary of e12is : %.2f",e2.salary);

    





    return 0;
}