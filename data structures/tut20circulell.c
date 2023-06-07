#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Linklisttraversal(struct Node *head){
    struct Node * ptr = head;
    printf("Elenment is %d\n", ptr->data);
    ptr = ptr->next;
    while(ptr != head){
        printf("Element is %d\n" ,ptr -> data );
        ptr = ptr ->next;
    }
}

struct Node * insertatfirst(struct Node * head , int data){
        struct Node * ptr = (struct node *) malloc(sizeof(struct Node));
        ptr -> data = data;
        struct Node * p =head->next;
        while(p->next != head)
        {
            p = p -> next; 
        }
        //at this point p points to last node of the circular link list
         p -> next = ptr;
         ptr -> next = head;
         head = ptr;
         return head;
        
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
    fourth-> next = head;

    printf("Linked list before insertion");
    Linklisttraversal(head);
    head =insertatfirst( head ,80);
    printf("Linked list before insertion");
    Linklisttraversal(head);

    return 0;
}