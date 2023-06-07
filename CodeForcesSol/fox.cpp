#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (a[0] != a[n-1])
    {
        for (int i = 1; i < n; i++)
        {

            if(a[i]>a[0])
            {
                a[i] = a[i]-a[0];
            }
        }
        sort(a, a + n);
    }

    cout<<n*a[0];
    

    return 0;
}