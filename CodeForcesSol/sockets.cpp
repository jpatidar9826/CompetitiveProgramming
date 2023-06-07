#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, c = 0;
    cin >> n >> m >> k;
    int s[n], sum = k;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);
    if (k >= m)
    {
        cout << 0;
        return 0;
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            c++;
            sum = sum + s[i] - 1;
            if (m <= sum)
            {

                cout << c ;
                return 0;
            }
        }
    }

    cout << -1 ;

    return 0;
}