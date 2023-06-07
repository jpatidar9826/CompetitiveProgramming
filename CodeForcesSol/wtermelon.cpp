#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    int k = w % 2;
    if (w > 2 && w <= 100 && k == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}