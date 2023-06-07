#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int n = 8;
    int s[n];
    s[0] = a + b + c;
    s[1] = a * b + c;
    s[2] = a + b * c;
    s[3] = a + c * b;
    s[4] = a * (b + c);
    s[5] = (a + b) * c;
    s[6] = (a + c) * b;
    s[7] = a * b * c;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<s[i]<<" ";
    // }

    sort(s, s + n);
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<s[i]<<" ";
    // }
    cout << endl
         << s[n - 1];

    return 0;
}