#include <iostream>
using namespace std;
#define SIZE 10
int A[SIZE];
int top;

bool isEmpty()
{
    if (top = -1)
        return true;
    else
        return false;
}
void push(int value)
{
    if (top == SIZE - 1)
    {
        cout << "Stack is Full " << endl;
    }
    else
    {
        top++;
        A[top] = value;
    }
}
void pop()
{
    if (top == -1)
        cout << "Stack is Empty" << endl;
    else
        cout<<"Popping "<<A[top] <<" out"<<endl;
        top--;
}
void displayStack()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        for (int j = 0; j <= top; j++)
        {
            cout << A[j] << endl;
        }
    }
}
void showTop()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Element at Top of stack : " << A[top] << endl;
    }
}

int main()
{
    top = -1;

    push(2);
    push(0);
    push(1);
    push(0);
    push(2);
    push(8);

    displayStack();
    pop();
    showTop();

    return 0;
}