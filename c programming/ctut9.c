#include<stdio.h>
#define PIE 3.14

int main()
{
    int a = 8;
    const float b =7.333;
    // b is constsnt now
    printf("hello world\n");
    printf("The value of a is %d and the value of b is %.3f\n", a, b);
    printf("MY backslash is \\ %f", PIE);
    //PIE is const pre defined.
    // \n when swritten isn string is single character
    return 0;
}