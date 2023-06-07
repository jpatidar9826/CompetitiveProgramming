#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string p[m];
    string q[m];
    string a[n];
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        p[i] = a;
        if (b.size() < a.size())
        {
            q[i] = b;
        }
        else
            q[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == p[j])
            {
                cout << q[j] << " ";
                break;
            }
        }
    }

    return 0;
}