#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p = 0;
    cin>>n;
    int l[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> l[i][0] >> l[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (l[i][0] < l[j][0] && l[i][1] > l[j][1])
            {
                p++;
            }
        }
    }
    if (p > 0)
    {
        cout << "Happy Alex";
    }
    else
        cout << "Poor Alex";

    return 0;
}