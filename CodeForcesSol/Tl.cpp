#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag = 0, v;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= 0)
        {
            flag++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    v = a[n - 1];
    if (v <= 2 * a[0])
    {
        while (v <= 2 * a[0])
        {
            v++;
        }
        v = v - 1;
    }

    if (v < b[0] && flag == 0)
    {
        cout << v;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}