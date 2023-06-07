#include<stdio.h>

int main()
{
    printf("hello world");
    int i, age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your age", i);
        scanf("%d", &age);
        
        /*{
            break;
        }*/
        if (age>10){
            continue;

        }
        printf("xyz");
    }
    
    return 0;
}
