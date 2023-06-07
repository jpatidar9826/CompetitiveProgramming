#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n+1];

    for (int i = 0; i < n; i++)
    {

        cin >> k;
        a[k] = i+1;
    }
    for (int i = 1; i < n+1; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}