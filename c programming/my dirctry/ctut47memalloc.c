#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of array you want\n");
    // scanf("%d",&n);
    // ptr = (int *) malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enteer the value no %d of this araay\n" ,i );
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value of %d element of this array is %d\n",i ,ptr[i]);
    // }

    //use of calloc
    int *ptr;
    int n;
    printf("Enter the size of array you want\n");
    scanf("%d",&n);
    ptr = (int *) calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enteer the value no %d of this araay\n" ,i );
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d element of this array is %d\n",i ,ptr[i]);
    }

     //use of realloc
    printf("Enter the size of array you want\n");
    scanf("%d",&n);
    ptr = (int *) realloc(ptr , n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enteer the new value no %d of this araay\n" ,i );
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the new value of %d element of this array is %d\n",i ,ptr[i]);
    }
    
    free(ptr);
    return 0;
}
