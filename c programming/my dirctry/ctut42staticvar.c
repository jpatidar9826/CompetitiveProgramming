# include <stdio.h>
int b;

int func(){
    static int num =0;
    printf("The value of num is %d\n", num);
    num++;

}

int main()
{
    int val = func(b);
    val = func(b);
    val = func(b);
    val = func(b);
    val = func(b);
    

    return 0;
}