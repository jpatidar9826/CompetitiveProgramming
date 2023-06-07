#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,p=0;
    cin>>n>>c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]-c-a[i+1]>0)
        {
            if(p<=a[i]-c-a[i+1])
            {
                p = a[i]-c-a[i+1];
            }
        }
        
    }
    cout<<p;
    
    

    return 0;
}