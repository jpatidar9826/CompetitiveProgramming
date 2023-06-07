#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int l, p = 0, q = 0, diff = 0;
    int n;
    cin >> n >> l;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] != 0)
    {
        p = a[0];
    }
    if (a[n - 1] != l)
    {
        q = l - a[n-1];
    }
    diff = max(p * 2, q * 2);

    for (int i = 0; i < n - 1; i++)
    {
        diff = max((a[i + 1] - a[i]), diff);
    }

    cout.precision(10);
    cout << fixed << diff / 2.0;

    return 0;
}