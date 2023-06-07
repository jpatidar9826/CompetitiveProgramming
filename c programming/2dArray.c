#include<stdio.h>

int main(){
    int marks[2][4] = {{45,65,75,43},{23,45,65,87}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
        
        printf("the value of %d,%d element of array is %d\n",i,j,marks[i][j]);
        }
        
    }
    
    return 0;
}