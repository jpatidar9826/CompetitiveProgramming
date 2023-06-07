#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr = NULL;
    char string[34];
    ptr = fopen("myf.txt","r");
    fscanf(ptr,"%s",string);
    printf("THe conntent of file is ~%s~",string);

    return 0;
}