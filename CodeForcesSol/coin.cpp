#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int s = 0;
    cin >> n;
    int ans = 0;
    int p = 0;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    s = s / 2;
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {

        ans = ans + a[i];
        p++;
        if (ans > s)
        {
            break;
        }
    }
    cout << p;

    return 0;
}