#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, c = 0, b = 0;
    cin >> n;
    int a[101][101] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if (a[i][j] == 1)
            {
                c++;
                break;
            }
        }
    }
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if (a[j][i] == 1)
            {
                b++;
                break;
            }
        }
    }
    cout << min(b, c);

    return 0;
}