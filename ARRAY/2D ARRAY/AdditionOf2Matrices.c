#include<stdio.h>
int main()
{
    int mat1[2][2]={{1,2},{3,4}};
    int mat2[2][2]={{3,4},{5,2}};
    int summat[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            summat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",summat[i][j]);
        }
        printf("\n");
    }


    return 0;
}