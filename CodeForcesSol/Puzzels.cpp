#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int k = a[n - 1] - a[0];
    cout << k;

    return 0;
}