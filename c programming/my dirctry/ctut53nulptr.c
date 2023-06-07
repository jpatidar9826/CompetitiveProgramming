#include<stdio.h>

int main()
{
    int a = 35;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("Thr adress of a is %d\n", *ptr);
    }
    else
    {
        printf("Thr pointer is null pointer and cannot be derefrenced\n");
    }
    return 0;


}