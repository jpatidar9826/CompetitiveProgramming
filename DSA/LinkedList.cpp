#include <bits/stdc++.h>
using namespace std;

/*  we are creating a linked linked list using c++ 
    
    head -->  LL1{ data = 2 | next =  LL2 } --> LL2{ data = 4 | next = LL3 } --> LL3{ data = 6 | next = NULL}   
    
    here head is the head of the linked list which pointing to the first Node of Linked List LL1           */ 

// using structure to create the Node Data type , which has two properties which are 
// first data which is value we want to store in node ,second next which is pointer to the next Node .
struct Node{
    int data;
    Node* next;
};

// creating a pointer to the head node and assined it null value
Node* head;


int main(){

#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
 head = NULL;

// ****step 1 -- creating a new node using Node structure and storing it to temp
    Node* temp = new Node();
// assigning temp -> data  = 2;
    temp->data = 2;
// assingning next pointer value to NULL;
    temp->next = NULL;
// assining head of linked list A the address to the newly created node which is temp 
    head = temp; 
// current situation  ==   head --> LL1{ data = 2 | next = NULL }

// ****step 2  -- creating new Node using Node structure and again storing it into temp
    temp = new Node();
// assigning temp -> data  = 4;
    temp->data = 4;
// assingning next pointer value to NULL;
    temp->next = NULL;
// current situation == head --> LL1{ data = 2 | next  = NULL } -->*(not link)  LL2{ data = 4 | next = NULL }

// ****step 3 -- linking LL1 to LL2
// create a temp1 pointer and point it to head and run a loop to make it to travel to the end of Link list which is LL1
   Node* temp1 = head;
   while (temp1->next != NULL )
   {
       temp1 = temp1->next;
   }
// temp1 is at LL1 and we are assining the temp -> next to newly created LL2
   temp1 -> next = temp;
// current situation == head --> LL1{ data = 2 | next  = LL2 } --> LL2{ data = 4 | next = NULL }

//now repeating the step 2 and 3 for LL3 
temp = new Node();
// assigning temp -> data  = 4;
    temp->data = 6;
// assingning next pointer value to NULL;
    temp->next = NULL;
// head --> LL1{ data = 2 | next  = LL2 } --> LL2{ data = 4 | next = NULL } -->*(no link) LL3{ data 6 | next = NULL }

// ****step 3 -- linking LL1 to LL2
// run a loop to make temp1  to travel to the end of Link list which is LL2
   while (temp1->next != NULL )
   {
       temp1 = temp1->next;
   }
// temp1 is at LL2 and we are assining the temp -> next to newly created LL3
   temp1 -> next = temp;

// printing the linked list
    cout<<"Printing the linked list :"<<endl;
   //create a node and point it to the head 
   Node* treaverser = head;
   while ( treaverser != NULL )
   {
        cout<< treaverser->data << "  -->  ";
        treaverser = treaverser->next; 
   }
   




   return 0;
}