#include<stdio.h>

int main(){

    //int marks[4];
    
    // marks[0]=23;
    // printf("The marks of 1 student is %d\n",marks[0]);
    // marks[0]=67;
    // marks[1]=478;
    // marks[2]=64;
    // marks[3]=78;
    // printf("The marks of 1 student is %d\n",marks[0]);
    // printf("The marks of 2 student is %d\n",marks[1]);
    // printf("The marks of 3 student is %d\n",marks[2]);
    // printf("The marks of 4 student is %d\n",marks[3]);

    /*int ranks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the rank given %d student\n",i);
        scanf("%d\n",&ranks[i]);
    }*/
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The rank of %d student is %d\n", i , ranks[i]);
    // }
    int matrix[2][4] ={{23,43,65,75},
                       {43,96,54,63}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of the %d,%d element of the matrix is %d\n",i,j,matrix[i][j]);
        }
        
    }
                       

    return 0;
}