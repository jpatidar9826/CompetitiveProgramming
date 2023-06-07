#include<stdio.h>

int main()
{
    float mathsmarks;
    float pmarks;
    
    printf("Enter maths marks\n");

    scanf("%f", &mathsmarks);
    printf("You got %f marks in maths\n", mathsmarks);

    printf("Enter physics marks\n");

    scanf("%f", &pmarks);
    printf("you got %f marks in physics\n", pmarks);

    if (pmarks>=33 && mathsmarks>=33)
    {
        printf("You got reward of 45.");
    }
    else if (pmarks>=33 && mathsmarks<33)   
    {
        printf("You got reward of 15.");
    }
    else if (pmarks<33 && mathsmarks>=33)
    {
        printf("You got reward of 15.");
    }
    else
    {
        printf("you got nothing.");
    }
    

    return 0;
}
