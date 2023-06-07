#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int k = n;
    int x[n];
    int y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if (x[i] <= s)
        {
            s = s + y[i];
            k--;
        }
    }
    if (k == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}