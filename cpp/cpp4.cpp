#include<iostream>
using namespace std;
class second;
class first
{
private:
    int x;

public:
    void getx()
    {
        cout << "Enter the value of x:" << endl;
        cin >> x;
    }
    friend void max(first, second);
};
class second
{
private:
    int y;

public:
    void gety()
    {
        cout << "Enter the value of y:" << endl;
        cin >> y;
    }
    friend void max(first, second);
};
void max(first a, second b)
{
    if (a.x > b.y)
    {
        cout << "Greater value is:" << a.x << endl;
    }
    else
    {
        cout << "Greater value is:" << b.y;
    }
}
int main()
{
    first a;
    second b;
    a.getx();
    b.gety();
    max(a, b);
}