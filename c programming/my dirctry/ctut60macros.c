#include<stdio.h>
#include<stdlib.h>


int main ()
{
    printf("The file name is %s\n",__FILE__);
    printf("Todays date is %s\n",__DATE__);
    printf("The time is %s\n",__TIME__);
    printf("The line no is %d",__LINE__);
    printf("ANSI : %d\n",__STDC__);
    

    return 0;
}