#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int l;
    int m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                l = i;
                m = j;
            }
        }
    }
    int p = abs(l - 2);
    int q = abs(m - 2);
    cout << p + q;

    return 0;
}