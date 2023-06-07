#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1)
    {
        cout << n;
    }
    else if (n > -11)
    {
        cout << 0;
    }
    else
    {
        int a = n / 10;
        int b = (n / 100) * 10 + (n % 10);
        if (a <= b)
        {
            cout << b;
        }
        else
        {
            cout << a;
        }
    }

    return 0;
}