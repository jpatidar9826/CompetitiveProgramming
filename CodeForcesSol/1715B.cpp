#include <bits/stdc++.h>
using namespace std;

void sol(int n, int k, int b, long long int s)
{
    vector<long long int> c(n, 0);

    c[0] = c[0] + (b * k);
    s = s - c[0];

    for (int j = 0; j < n; j++)
    {
        if (s != 0)
        {
            if (s > k - 1)
            {
                c[j] = c[j] + k - 1;
                s = s - (k - 1);
            }
            else
            {
                c[j] = c[j] + s;
                s = 0;
            }
        }
        else
        {
            break;
        }
    }
    if (s != 0)
    {
        cout << -1;
    }
    else
    {
        for (int j = n - 1; j >= 0; j++)
        {
            cout << c[j] << " ";
        
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    int a[t][3];
    long long int bt[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[0][2] >> bt[i];
    }
    cout<<bt[0];
    for (int i = 0; i < t; i++)
    {
        sol(a[i][0],a[i][1],a[i][2],bt[i]);
    }
    

    return 0;
}