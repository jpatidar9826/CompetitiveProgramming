#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, s, t, p[100000+1];
    cin>>n>>s>>t;
    for (int i = 1; i <= n; ++i)
    {
        cin>>p[i];
    }
    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }
    if (s!=t)step = -1;
    
    
    cout<<step;

    return 0;
}