#include <bits/stdc++.h>
using namespace std;

int checker(int k)
{
    int z = 0;
    for (int i = 0; i <= 1000; i = i * 10)
    {
        int p = k % i;
        if (k != p)
        {
            z++;
        }
        else
        {
            break;
        }
    }

    int l = k % 10;
    int m = k % 100;
    int n = k % 1000;
    int o = 0;
    if (l == 4 || l == 7)
    {
        o++;
    }
    if (m / 10 == 4 || m / 10 == 7)
    {
        o++;
    }
    if (n / 100 == 4 || n / 100 == 7)
    {
        o++;
    }
}

int main()
{
    int a;
    cin >> a;

    return 0;
}