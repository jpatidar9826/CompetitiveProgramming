#include<stdio.h>

int main(){
    /*label:
    printf("we  are inside lable");
    goto end;
    printf("hello world");
    goto label;
    end:
    printf("we are at end");
    */
   int num;
   for (int i = 0; i<8; i++)
   {
       printf("%d\n", i);
       for (int j = 0; j < 8; j++)

       {
        
       
       
          printf("Enter the number , Enter 0 to exit \n");
           scanf("%d", &num);
           if (num==0);
           {
           goto end;
            }
       }

   }
   end:
   


    return 0;
}

