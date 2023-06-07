#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << 0;
        return 0;
    }
    else if (x == 1 && y == 0)
    {
        cout << 0;
        return 0;
    }
    if (x >= 0 && y >= 0)
    {
        if (x >= y)
        {
            cout << 1 + (x - 1) * 4;
        }
        else
        {
            cout << 2 + (y - 1) * 4;
        }
    }
    else if (x < 0 && y >= 0)
    {
        if (abs(x) <= y)
        {
            cout << 2 + (y - 1) * 4;
        }
        else
        {
            cout << 3 + (abs(x) - 1) * 4;
        }
    }
    else if (x < 0 && y < 0)
    {
        if (abs(x) >= abs(y))
        {
            cout << 3 + (abs(x) - 1) * 4;
        }
        else
        {
            cout << 4 + (abs(y) - 1) * 4;
        }
    }
    else if (x >= 0 && y < 0)
    {
        if (abs(x) <= abs(y) + 1)
        {
            cout << 4 + (abs(y) - 1) * 4;
        }
        else
        {
            cout << 5 + (abs(x) - 1) * 4;
        }
    }

    return 0;
}