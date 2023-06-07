#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x[4];
    int l[4];
    int lo = 0, s = 101, k = 0, p = 0;
    

    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
        l[i] = x[i].size() - 2;
        if (l[i] >= lo)
        {
            lo = l[i];
        }
        if (l[i] <= s)
        {
            s = l[i];
        }
    }
    // cout<<lo<<s;
    for (int i = 0; i < 4; i++)
    {
        if (s * 2 <= l[i])
        {
            k++;
        }
        if (lo / 2 >= l[i])
        {
            p++;
        }
    }
    //cout<< k << p;
    if (k == 3 && p!=3)
    {
        for (int i = 0; i < 4; i++)
        {
            if (s == l[i])
            {
                cout << x[i][0];
            }
        }
    }
    else if (p == 3 && k!=3)
    {
        for (int i = 0; i < 4; i++)
        {
            if (lo == l[i])
            {
                cout << x[i][0];
            }
        }
    }
    else
        cout << "C";

    return 0;
}