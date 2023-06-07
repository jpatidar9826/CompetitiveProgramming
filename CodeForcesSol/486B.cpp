#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                b[i][j] = 0;
            }
            else
            {
                b[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (b[k][j] == 2)
                    {
                        b[k][j] = 3;
                    }
                }
                for (int l = 0; l < n; l++)
                {
                    if (b[i][l] == 2)
                    {
                        b[i][l] = 3;
                    }
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 2)
            {
                b[i][j] = 1;
            }
            else if (b[i][j] == 3)
            {
                b[i][j] = 0;
            }
        }
    }
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (c[i][j] == 1)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] == 1)
            {
                for (int k = 0; k < m; k++)
                {
                    if (c[k][j] == 2)
                    {
                        c[k][j] = 3;
                    }
                }
                for (int l = 0; l < n; l++)
                {
                    if (c[i][l] == 2)
                    {
                        c[i][l] = 3;
                    }
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] == 2)
            {
                c[i][j] = 0;
            }
            else if (c[i][j] == 3)
            {
                c[i][j] = 1;
            }
        }
    }
    int f = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] != a[i][j])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}