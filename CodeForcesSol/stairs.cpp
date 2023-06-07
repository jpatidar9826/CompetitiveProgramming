#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s;
    cin >> n >> m;

    if (m > n)
    {
        cout << "-1";
    }
    else
    {
        if (n % 2 == 0)
        {
            s = n / 2;
            while (s % m != 0)
            {
                s++;
            }
        }
        else
        {
            s = (n / 2) + 1;
            while (s % m != 0)
            {
                s++;
            }
        }
        cout <<s;
    }

    return 0;
}