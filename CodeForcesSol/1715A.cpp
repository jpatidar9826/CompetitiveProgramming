#include <bits/stdc++.h>

using namespace std;

int travl(int n,int m)
{
    if (n==1&&m==1)
    {
        return 0;
    }
    
    int step = 0;
    step = (n-1)+(m-1)*2; 

    return step+1;
}

int main() {
    int t;
    cin>>t;
    int a[t][2];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for (int i = 0; i < t; i++)
    {
        int p = a[i][0];
        int q = a[i][1];
        if (p>=q)
        {
            cout<<travl(p,q)<<endl;
        }
        else
        {
            cout<<travl(q,p)<<endl;
        }
        
        
        
    }
    
    
    
    return 0;
}