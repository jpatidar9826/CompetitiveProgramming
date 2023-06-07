#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, c = 0;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        x = arr[i][0];
        y = arr[i][1];
        int f = 0, g = 0, h = 0, l = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][0] == x && arr[j][1] < y)
            {
                f++;
            }
            if (arr[j][0] == x && arr[j][1] > y)
            {
                g++;
            }
            if (arr[j][0] < x && arr[j][1] == y)
            {
                h++;
            }
            if (arr[j][0] > x && arr[j][1] == y)
            {
                l++;
            }
        }
        if (f > 0 && g > 0 && h > 0 && l > 0)
        {
            c++;
        }
    }
    cout << c;

    return 0;
}