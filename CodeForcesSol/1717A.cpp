#include <bits/stdc++.h>
using namespace std;
const int l = 1e8 + 1;
int a[l] = {2};

void sol(int k)
{
    int count = 1;
    for (int i = k - 1; i >= 2; i--)
    {
        count++;
        int gc = __gcd(k, i);
        long long lc = k * 1 / (gc * gc);
        if (lc <= 3)
            count = count + 2;
    }
    a[k] = count;
    if ((k - 1) > 3)
        sol(k - 1);
    
}

int main()
{
    a[0] = 0;
    a[1] = 1;
    a[2] = 4;
    a[3] = 7;
    sol(l);
    int t;
    cin >> t;

    return 0;
}