#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    if (a[0] == 1 || a[m - 1] == n)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < m-2; i++)
    {
        if (a[i + 1] - 1 == a[i] && a[i + 2] - 2 == a[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}