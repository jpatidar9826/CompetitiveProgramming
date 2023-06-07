#include<stdio.h>

int main(){
    int a = 6;
    int* ptr = &a;
    printf("The value of a is %d\n" ,a);
    printf("The value of a is %d\n",*ptr);
    printf("The value of addreess of a in hexadesimal forem is%x\n",ptr);
    return 0;
}