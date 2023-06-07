#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char favc[10];
};
int main (){
    struct student jay ,ram ,luv;
    jay.id = 1;
    ram.id = 2;
    luv.id = 3;
    jay.marks = 45;
    ram.marks = 48;
    luv.marks = 37;
    strcpy(jay.favc,"ironman");
    strcpy(ram.favc,"thanos");
    strcpy(luv.favc,"vision");
    printf("Student %d got %d marks and fav character is %s\n",jay.id ,jay.marks ,jay.favc);


    return 0;

}