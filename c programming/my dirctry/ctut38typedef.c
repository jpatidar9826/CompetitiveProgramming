#include <stdio.h>

int main(){
    // typedef <previous name> <alias name>;
    typedef unsigned long ul;
    ul l1,l2,l3;

    //int *a, b;
    typedef int* intponter;
    intponter a,b;

    int c = 8;
    a = &c;
    b = &c;


    return 0;

}