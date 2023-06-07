#include <stdio.h>
#include <string.h>

union student
{
int id;
float marks;
char fav;
char shero[20];
};

int main(){

    union student s1;
    s1.id = 1;
    s1.marks = 34.6;
    s1.fav = 'k';
    strcpy(s1.shero ,"ironman");

    printf("The id of s1 is  %d\n",s1.id);
    printf("The marks of s1 is  %f\n",s1.marks);
    printf("The fav character of s1 is  %c\n",s1.fav);
    printf("The fav superhero of s1 is  %s\n",s1.shero);

     return 0;

}