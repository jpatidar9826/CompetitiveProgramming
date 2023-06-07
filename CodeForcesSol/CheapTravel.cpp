#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int c = 0;
    while (m <= n)
    {
        c = c + b;
        n = n - m;
    }

    while (n != 0)
    {
        c = c + a;
        n = n - 1;
    }
    cout << c;

    return 0;
}