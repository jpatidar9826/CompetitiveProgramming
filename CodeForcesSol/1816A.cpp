#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
        {
            cout << 1 << endl;
            cout << a << " " << b << endl;
        }
        else if (a % b != 0 && b % a != 0)
        {
            cout << 1 << endl;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << b-1 << endl;
            cout << a << " " << b << endl;


        }
    }

    return 0;
}