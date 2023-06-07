#include <iostream>
#include <stack>
#include <conio.h>
#include <queue>
using namespace std;
class List
{
protected:
    int N, value;

public:
    virtual void store() = 0;
    virtual void retrieve() = 0;
};
class Stack : public List
{
protected:
    stack<int> s;

public:
    void store()
    {
        cout << "Enter the numbers of values you want to store in stack is: " << endl;
        cin >> N;
        cout << "Enter the values: " << endl;
        for (int i = 0; i < N; i++)
        {
            cin >> value;
            s.push(value);
        }
    }
    void retrieve()
    {
        cout << "The number retrieved is from stack is: " << s.top() << endl
             << endl;
        s.pop();
    }
};
class Queue : public List
{
protected:
    queue<int> q;

public:
    void store()
    {
        cout << "Enter the numbers of values you want to store in queue: " << endl;
        cin >> N;
        cout << "Enter the values: " << endl;
        for (int i = 0; i < N; i++)
        {
            cin >> value;
            q.push(value);
        }
    }
    void retrieve()
    {
        cout << "The number retrieved from queue is: " << q.front() << endl;
        q.pop();
    }
};
int main()
{
    Stack S;
    Queue Q;
    S.store();
    S.retrieve();
    Q.store();
    Q.retrieve();
}