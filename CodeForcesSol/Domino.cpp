#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, su = 0, sl = 0, flag = 0;
    int p = 0, swap = 0;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        if (a[i][0] % 2 == 0 && a[i][1] % 2 == 1)
        {
            su++;
        }
        if (a[i][0] % 2 == 1 && a[i][1] % 2 == 0)
        {
            sl++;
        }
        if (a[i][0] % 2 == 1 && a[i][1] % 2 == 1)
        {
            flag++;
        }
    }
    if (flag % 2 == 0)
    {
        if (su % 2 == 0 && sl % 2 == 0 )
        {
            cout << "0";
        }
        else if (su % 2 == 1 && sl % 2 == 1)
        {
            cout << "1";
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        if (su % 2 == 1 && sl % 2 == 1)
        {
            cout << "0";
        }
        else if (su % 2 == 0 && sl % 2 == 0 && (su>0 || sl>0))
        {
            cout << "1";
        }
        else
        {
            cout << "-1";
        }
    }

    return 0;
}