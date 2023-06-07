#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    char a, b;
    char inarr[n][n], arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> inarr[i][j];
        }
    }

    a = inarr[0][0];
    b = inarr[0][1];
    if (a == b)
    {
        flag = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                arr[i][j] = a;
                if (inarr[i][j] != arr[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                arr[i][j] = b;
                if (inarr[i][j] != arr[i][j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag==1)
        {
            break;
        }
        
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}