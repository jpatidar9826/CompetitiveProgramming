#include <stdio.h>
int rec(int);
main(){
    int a,fa;
    a=5;
    fa=rec(a);
    printf("factorial values =%d",fa);

}

int rec(int x){
    int f;
    if(x==1){
        return(1);
    }
    else{
        f=x*rec(x-1);
    }

    
    
      return(f);
}