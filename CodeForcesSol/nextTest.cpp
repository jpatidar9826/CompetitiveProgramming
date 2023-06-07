#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k[n];
    int index = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    sort(k, k + n);
    for (int i = 0; i < n; i++)
    {
        if (k[i] == index)
        {
            index++;
        }
    }
    cout << index;

    return 0;
}