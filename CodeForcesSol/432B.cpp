#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int b[n][2];
    int ma[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r >> a[i][1];
        a[i][0] = r;
        ma[r]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        b[i][0] = n - 1;
        b[i][1] = n - 1;
    }

    for (int i = 0; i < n; i++)
    {
        int t = a[i][1];
        int p = ma[t];


        b[i][0] = b[i][0] + p;
        b[i][1] = b[i][1] - p;
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i][0] << " " << b[i][1] << endl;
    }

    return 0;
}