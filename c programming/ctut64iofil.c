#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[35] = "my father name is gopal";
     //redinng a file
    //  ptr = fopen("myfile.txt","r");
    //  fscanf(ptr ,"%s", string);
    //  printf("the content of file ~%s~\n",string);

    //writinf to a file
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);

    return 0;
}