#include<stdio.h>

int main(){
    int marks[4] = {45,343,3,2,};
    /*for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d elemnt of array\n", i);
        scanf("%d",&marks[i]);
    }*/
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of array is %d\n", i ,marks[i]);
    }
    
    return 0;
}