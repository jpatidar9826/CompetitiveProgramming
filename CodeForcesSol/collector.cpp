#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v, k = 0;
    cin >> n >> v;
    int s[n][10];
    int l[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i][0];
        int p = 0;
        for (int j = 1; j <= s[i][0]; j++)
        {
            cin >> s[i][j];
            if (s[i][j] < v)
            {
                p++;
            }
        }
        if (p != 0)
        {
            l[k] = i + 1;
            k++;
        }
    }
    if (k != 0)
    {
        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << l[i] << " ";
        }
    }
    else
    {
        cout << "0";
    }

    return 0;
}