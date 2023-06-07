#include <stdio.h>
int main()
{
int base, exponent;
int result = 1;
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &exponent);
for (exponent; exponent>0; exponent--)
{
result = result * base;
}
printf("Answer = %d", result);
return 0;
}