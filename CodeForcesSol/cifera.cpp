#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k;
    long long int l;
    int f = 0;

    cin >> k >> l;
    long long int m = k;
    while (m < l)
    {
        m = m * k;
        f++;
    }
    if (m == l)
    {
        cout << "YES" << endl
             << f;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}