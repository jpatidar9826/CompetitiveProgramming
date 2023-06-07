#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int f = 0,x[2],y=0, n = a.size();


    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x[f] = i;
            f++;
        }
        if (f==2)
        {
            y = 1;
            break;
        }
        
    }
    if (f == 2)
    {
        swap(a[x[0]], a[x[1]]);
        if (a == b)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
    

    return 0;
}