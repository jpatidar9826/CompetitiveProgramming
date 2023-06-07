#include<stdio.h>

int main()
{
    int i = 1, j = 1;
    for (; ;)
    {
      if (i > 6)
      break;
      else
      {
          j += i;
          printf("%d",j);
          i += j;

      }
      
      {
          /* code */
      }
        /* code */
    }
        
    return 0;
}