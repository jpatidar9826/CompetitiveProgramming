#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, j, p, k = 0;
    cin>>n>>d;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        k = k + s[i];
    }
    j = (n - 1) * 2;
    p = 5 * j + k;

    if (p > d)
    {
        cout << "-1";
    }
    else
    {
        while (p <= d - 5)
        {
            p = p + 5;
            j++;
        }
        cout << j;
    }

    return 0;
}