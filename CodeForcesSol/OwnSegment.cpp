#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, f = 0, s = 0, a[101] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (f == 0)
        {
            for (int j = x; j < y; j++)
            {
                a[j] = 1;
            }
            f = 1;
        }
        else
        {
            for (int k = x; k < y; k++)
            {
                a[k] = 0;
            }
        }
    }
    for (int i = 0; i < 101; i++)
    {
        s = s + a[i];
    }
    cout << s;

    return 0;
}