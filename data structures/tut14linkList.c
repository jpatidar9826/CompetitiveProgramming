#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data ;
    struct Node * next ;
};
 void linklisttraversal(struct Node *ptr){
     while(ptr != NULL){
     printf("Element : %d\n" , ptr -> data);
     ptr = ptr->next;
     }

 }

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    //Allocate memory for nodes in link list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //link first and second nodes
    head -> data = 7;
    head -> next = second;

    //link second and third nodes
    second -> data = 13;
    second -> next = third;

    //Limk third and foiurth nodes
    third-> data = 45;
    third-> next = fourth;
    
    //terminating the last nodee
    fourth-> data = 77 ;
    fourth-> next = NULL;

    linklisttraversal(head);


    
    return 0;
}
