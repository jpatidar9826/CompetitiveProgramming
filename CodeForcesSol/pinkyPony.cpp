#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, a, b, c1 = 0, c2 = 0, c3 = 0, c4 = 0, k = 4;
    cin >> n >> m >> i >> j >> a >> b;
    int count[k] = {-1, -1, -1, -1};

    int l = i, p = j, f = max(n, m) / min(a, b) + min(a, b);
    while (c1 < f)
    {
        if (l - a > 0 && p - b > 0)
        {
            l = l - a, p = p - b;
        }

        else if (l - a > 0 && p + b < m + 1)
        {
            l = l - a, p = p + b;
        }
        else if (p - b > 0 && l + a < n + 1)
        {
            l = l + a, p = p - b;
        }
        else if (l == 1 && p == 1)
        {
            count[0] = c1;
            break;
        }

        c1++;
    }
    l = i, p = j;
    while (c2 < f)
    {
        if (l + a < n + 1 && p + b < m + 1)
        {
            l = l + a, p = p + b;
        }
        else if (l + a < n + 1 && p - b > 0)
        {
            l = l + a, p = p - b;
        }
        else if (p + b < m + 1 && l - a > 0)
        {
            l = l - a, p = p + b;
        }
        else if (l == n && p == m)
        {
            count[1] = c2;
            break;
        }
        c2++;
    }
    l = i, p = j;
    while (c3 < f)
    {
        if (l - a > 0 && p + b < m + 1)
        {
            l = l - a, p = p + b;
        }
        else if (l - a > 0 && p - b > 0)
        {
            l = l - a, p = p - b;
        }
        else if (p + b < m + 1 && l + a < n + 1)
        {
            l = l + a, p = p + b;
        }
        else if (l == 1 && p == m)
        {
            count[2] = c3;
            break;
        }

        c3++;
    }
    l = i, p = j;
    while (c4 < f)
    {
        if (l + a < n + 1 && p - b > 0)
        {
            l = l + a, p = p - b;
        }
        else if (l + a < n + 1 && p + b < m + 1)
        {
            l = l + a, p = p + b;
        }
        else if (p - b > 0 && l - a > 0)
        {
            l = l - a, p = p - b;
        }
        else if (l == n && p == 1)
        {
            count[3] = c4;
            break;
        }

        c4++;
    }
    sort(count, count + k);
    
    for (int t = 0; t < 4; t++)
    {
        if (count[t] >= 0)
        {
            cout << count[t];
            return 0;
        }
    }
    cout << "Poor Inna and pony!";
    return 0;
}