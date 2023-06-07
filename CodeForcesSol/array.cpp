#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 0, k = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            j++;
        }
        else if (a[i] < 0)
        {
            k++;
        }
    }
    
    sort(a, a + n);
    cout << "1 " << a[0] << endl;
    if (k % 2 == 1)
    {
        cout << n - 2 << " ";
        for (int i = 1; i < n; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        cout << "1 "<< "0";
    }
    else
    {
        cout << n - 3 << " ";
        for (int i = 2; i < n; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        cout << "2 "<< "0 "<<a[1];
        
    }
    

    return 0;
}