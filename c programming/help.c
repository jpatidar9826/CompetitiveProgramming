#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int firstpage;
    char name[25];

invalid:
    printf("PRESS 1 for Login\nPRESS 2 for Sign - Up\nPRESS 0 to EXIT\n");
    scanf("%d", &firstpage);
    if (firstpage == 1)
    {

        printf("Welcome to the Login Page\n");
    }
    else if (firstpage == 2)
    {
        printf("Welcome to the Sign - Up Page\n");
        printf("Enter your Name\n");
        getchar();
        gets(name);
        printf("sign up success -%s-",name);
    }
    else if (firstpage == 0)
    {

        printf("Exiting Program\n");
        goto end;
    }
    else
    {

        printf("INVALID INPUT\a\nPlease Enter a Valid Input");
        goto invalid;
    }

end:
    return 0;
}