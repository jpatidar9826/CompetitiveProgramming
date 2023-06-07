#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;


};

int isEmpty(struct stack*ptr){
    if(ptr->top == -1){
        return  1;
    }
    else{
        return 0;
    }

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size -1){
        return  1;
    }
    else{
        return 0;
    }

}
int isParenthesismatch(char* exp){
    //cresate and initialized the stack
    struct stack *sp;
    sp->size = 100;
    s->top = -1 ;
    s->arr = (char*)malloc(s->size* sizeof(char));
    
    for (size_t i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='('){

        }
        else if (exp[i] ==')')
        {
            /* code */
        }
        
    }
    
}



int main(){
    // struct stack s;
    // s.size  =80;
    // s.top = -1 ;
    // s.arr = (int*)malloc(s.size* sizeof(int));

    struct stack *s; 
    s->size = 80;
    s->top = -1 ;
    s->arr = (char*)malloc(s->size* sizeof(char)); 

    //check if stack is empty 
    if(isEmpty(s)){
        printf("the stack is empty\n");
    }
    else{
        printf("the stack is not full\n");
    }
    return 0;
}