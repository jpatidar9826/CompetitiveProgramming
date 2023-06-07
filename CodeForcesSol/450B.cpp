#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;
int main()
{
    int f1, f2, n;
    cin >> f1 >> f2 >> n;
    long long int a[7];
    a[1] = f1;
    a[2] = f2;
    a[3] = a[2] - a[1];
    a[4] = a[3] - a[2];
    a[5] = a[4] - a[3];
    a[6] = a[5] - a[4];
    long long int c;

    n = n % 6;
    
    if (n == 0)
    {
        c = a[6];
    }
    else
    {
        c = a[n];
    }
    if (c >= 0)
    {
        c = c % mod;
    }
    else
    {
        while (c < 0)
        {
            c = c + mod;
        }
    }
    cout << c;

    return 0;
}