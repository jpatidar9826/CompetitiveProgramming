#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    long long int s = 0;
    cin >> n >> m;
    int a[m + 1];
    a[0] = 1;

    for (int i = 1; i < m + 1; i++)
    {

        cin >> a[i];
    }
    for (int i = 1; i < m + 1; i++)
    {
        if (a[i] >= a[i - 1])
        {
            s = s + (a[i] - a[i - 1]);
        }
        else
        {
            s = s + (n - a[i - 1]) + a[i];
        }
    }
    cout << s;

    return 0;
}