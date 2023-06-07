#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    int t[n][2];
    for (int i = 0; i < n; i++)
        t[i][0] = 0, t[i][1] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'L')
            t[i][0] = i + 1;
        else
            t[i][1] = i + 1;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (t[i][1] == 0)
        {
            t[i][1] = t[i + n / 2][0];
        }
        if (t[i][0] == 0)
        {
            t[i][0] = t[i + n / 2][0];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        cout << t[i][0] << " " << t[i][1] << endl;
    }

    return 0;
}