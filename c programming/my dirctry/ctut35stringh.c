# include <stdio.h>
# include <string.h>

int main(){

    char name1[] = "jayant";
    char name2[] = "patidar";
    printf("The length of name1 is %d\n",strlen(name1));
    printf("The length of name2 is %d\n",strlen(name2));
    printf("The reverse of name1 is \n");
    puts(strrev(name1));
    printf("The reverse of name2 is \n");
    puts(strrev(name2)); 
    return 0;
}