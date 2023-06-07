#include<iostream>
using namespace std;
class Swaper
{
private:
    int x, y;

public:
    void getvalue()
    {
        cout << "Enter the value for x: " << endl;
        cin >> x;
        cout << "Enter the value for y: " << endl;
        cin >> y;
    }
    void swapxny()
    {
        x = x + y;
        y = x - y;
        x = x - y;
        cout << "After Swapping the Numbers:" << endl
             << "x =" << x << endl
             << "y =" << y << endl;
    }
};
int main()
{
    Swaper S1;
    S1.getvalue();
    S1.swapxny();
}