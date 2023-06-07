#include <bits/stdc++.h>
using namespace std;

/* creating a function to insert node at begining of Linked List  */

//creating Node structure
struct Node
{
    int data;
    Node* next;
};

//creating Global head for the Linked List 
Node* head;

/*  if we choose not to declare the head as global variable
      we have pass the address of head in insert function -- Insert(&head, k);
      and the function would be -- 
      void Insert(Node** head, int x){  --here Node** is pointer to the pointer as we are passing address of pointer
        and instead of head we have to use *head every where 
      }
*/
void Insert(int x){
    //create the new Node using structure 
    Node* temp = new Node();
    //assigning temp -> data = x
    temp->data = x;
    /* condition1 - (when Linked List is empty) means head point to NULL means
        head --> NULL
        new Node(temp){ data = x | next = head(which is pointing to the NULL which implies next = NULL) }

    
    condition2 - (when Linked list is not empty) head point to the starting link of the Linked list we are now assigning temp -> next to the starting of 
    the linked list means 
        head --> LL1{}
        new Node(temp){ data = x | next = head(which is pointing to the LL1 which implies next = LL1) }

    */ 
    temp->next = head;
    /* now temp is the starting node of Linked List so assining head to temp         
    for Condition1  -     head --> temp{ data = x | next -> NULL }
    for Condition2 -      head --> temp{ data = x | next -> LL! } --> LL1{}
    */
    head = temp;
}
void Print(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"  -->  ";
        temp = temp->next;
    }
    
}


int main(){

    head = NULL;
    cout<<"Enter how many no. you wish to add in the Linked List"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number you want to add "<<endl;
        int k;
        cin>>k;
        Insert(k);
        Print();
        cout<<endl;
    }
    




    return 0;
}