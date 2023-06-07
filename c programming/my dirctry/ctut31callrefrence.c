# include <stdio.h>

void changeValue(int *add)
{
    *add = 56;

}


int main()
{
    int a = 54;
    printf("The value of a is %d\n",a);
    changeValue(&a);
    printf("The value of a is %d\n",a);

    return 0;
}