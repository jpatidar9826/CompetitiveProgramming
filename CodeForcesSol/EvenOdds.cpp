#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    int k;
    cin>>n>>k;
    int l = 0;
    int p[n];

    for (int i = 1; i <= n; i=i+2)
    {
            p[l] = i;
            l++;
    }
   
    for (int i = 2; i <= n; i=i+2)
    {
            p[l] = i;
            l++;
    }
    
    
    cout<<p[k-1];
    
    

    return 0;
}