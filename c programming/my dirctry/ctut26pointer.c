# include <stdio.h>

int main(){
    printf("Lets learn poiners\n");
    int num = 54;
    int *ptra = &num;
    printf("The value of num is %d\n", num);
    printf("The value of num is %d\n", *ptra);
    printf("The address of num is %p\n", &num);
    printf("The address  of pointer  is %p \n", &ptra);
    printf("The adress of  num in hexadesimmal form is %x\n", ptra);

    return 0;
}
