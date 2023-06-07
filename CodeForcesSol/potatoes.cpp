#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int y, k, n,p=0;
    cin >> y >> k >> n;
    int flag = 0;

    p = k - y;
    for(int i = p; i <= n-y ; i+=k)
    {
        if(i>0)
        {
           cout<<i<<" ";
           flag = 1;
        }
    }
    
    if (flag == 0)
    {
        cout<<"-1";
    }
    
    
}