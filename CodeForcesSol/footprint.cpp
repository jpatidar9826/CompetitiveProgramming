#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int f=0,lc=0;
    string a;
    cin>>n>>a;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '.' && a[i+1] == 'R')
        {
            cout<<i+2<<" ";
            
        }
        else if (a[i] == 'R' && a[i+1] == '.')
        {
            cout<<i+2;
        }
        
        

        
    }
    

    return 0;
}