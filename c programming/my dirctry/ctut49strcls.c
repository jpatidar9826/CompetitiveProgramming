#include<stdio.h>


int add( int a, int b)
{
    extern int sum;
    //sum = a+b;
    return sum;
}
int sum = 988;

int main() 
{
    //Declaration - telling the compiler about the variable (no space reserved)
    //definnation - declarationn + spare reservation
    //  int sum = add(3,5);
    //int sum = 98;
    printf("%d\n",sum);

    return 0;
}