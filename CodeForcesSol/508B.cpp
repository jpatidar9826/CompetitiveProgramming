#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 9, k = -1, f = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        int a = n[i] - '0';
        int t = n[n.size() - 1] - '0';
        if (a % 2 == 0)
        {
            if (f == 0 && t>a)
            {
                p = a;
                k = i;
                break;
            }
            else if (a > t)
            {
                k = i;
            }
        }
    }
    if (k != -1)
    {
        swap(n[n.size() - 1], n[k]);
        cout << n;
    }
    else
    {
        cout << -1;
    }

    return 0;
}