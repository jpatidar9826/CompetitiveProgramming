#include <stdio.h>
 int main()
 {
    char a[5] = "pornd";
    scanf("%c/n", &a[1]);
   
    if(a == "pornd")
    {
       printf("hello");
    }
    else
    {
       for (int i = 0; i < 5; i++)   
    {
       printf("the value of %d elemnet is %c\n", i ,a[i]);
    }
       
    }
    
    
    return 0;

 }