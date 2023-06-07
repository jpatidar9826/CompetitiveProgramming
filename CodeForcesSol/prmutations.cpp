#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1001, s = 0;
    cin >> n;
    int a[n];

    int p[k];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= 1000; i++)
    {
        p[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                p[i]++;
            }
        }
    }
    sort(p, p + k);
    // for (int i = 1000; i > 1000-n; i--)
    // {
    //     cout<<p[i]<<" ";
    // }
    for (int i = 0; i < 1000; i++)
    {
        s = s + p[i];
    }
    if (s >= p[1000] - 1)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}