#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int f = 0, n;
    int c[26];
    int d[26];
    for (int i = 0; i < 26; i++)
    {
        c[i] = 0;
        d[i] = 0;
    }
    if (a.size() == b.size())
    {
        n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                for (int j = 0; j < 26; j++)
                {
                    char v = 'a' + j;

                    if (a[i] == v)
                    {
                        c[j]++;
                    }
                    else if (b[i] == v)
                    {
                        d[j]++;
                    }
                }
            }
        }
        for (int i = 0; i < 26; i++)
        {
            // cout<<c[i]<<" "<<d[i]<<" ";
            if (c[i] != d[i])
            {
                f++;
            }
        }
        if (f == 0)
        {
            cou3t << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}