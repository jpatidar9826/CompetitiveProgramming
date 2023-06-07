#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    long long int mx = 2000000000;
    long long int mn = -2000000000;
    string a;
    long long int b;
    char c;

    for (int i = 0; i < n; i++)
    {

        cin >> a >> b >> c;
        // cout<<a<<b<<c;
        if (c == 'Y')
        {

            if (a == "<")
            {

                mx = min(b, mx);
            }
            else if (a == "<=")
            {

                mx = min(b+1, mx);
            }
            else if (a == ">")
            {

                mn = max(b,mn);
            }
            else if (a == ">=")
            {

                mn = max(b-1, mn);
            }
        }
        else
        {
            if (a == "<")
            {
                mn = max(b-1, mn);
            }
            else if (a == "<=")
            {
                mn = max(b,mn);
            }
            else if (a == ">")
            {
                mx = min(b+1,mx);
            }
            else if (a == ">=")
            {
                mx = min(b,mx);
            }
        }
    }
    
    if (mx-mn > 1)
    {
        cout << mn+1;
    }
    else cout<<"Impossible";
    return 0;
}