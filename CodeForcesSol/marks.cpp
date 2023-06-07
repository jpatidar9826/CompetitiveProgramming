#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag = 0;
    cin >> n >> m;
    char a[n][m];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int p = 0;
        int k = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j][i] - '0' > p)
            {

                p = a[j][i] - '0';
            }
        }

        for (int z = 0; z < n; z++)
        {
            if (p == a[z][i] - '0')
            {
                b[z] = 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        flag = flag + b[i];
    }
    cout << flag;

    return 0;
}