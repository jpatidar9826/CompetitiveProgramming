# include <stdio.h>
/* Print a mutiplication table of a number entered by the user in prety form

Example:
Input
enter the number you want multiplication of:6
output

6 * 1 =6 
6 * 2 = 12
6 * 3 = 18


6 * 10 = 60

*/
int main()
{
    /* code */
    int a;
    a = 6;

    printf("Table of %d\n", a);
    printf("6 * 1 = %d\n", a);
    printf("6 * 2 = %d\n", a+a);
    printf("6 * 3 = %d\n", a+a+a);
    printf("6 * 4 = %d\n", a+a+a+a);
    printf("6 * 5 = %d\n", a+a+a+a+a);
    printf("6 * 6 = %d\n", a+a+a+a+a+a);
    printf("6 * 7 = %d\n", a+a+a+a+a+a+a);
    printf("6 * 8 = %d\n", a+a+a+a+a+a+a+a);
    printf("6 * 9 = %d\n", a+a+a+a+a+a+a+a+a);
    printf("6 * 10 = %d\n", a+a+a+a+a+a+a+a+a+a);

    
    return 0;
}
