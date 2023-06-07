#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        int count = 0;
        cin>>n>>k;
        int a[n][n];

        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < n; l++)
            {
                cin>>a[j][l];
            }
            
        }
        int x = 0;

        while ( x != n/2)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[0+x][j] != a[n-1-x][n-1-j] )
                {
                    count++;
                }
                
            }
            x++;
        }

        if (count > k)
        {
            cout<<"NO"<<endl;
        }else if( n%2 == 1 && (k-count) <= ( n*n - 2*k))
        {
            cout<<"YES"<<endl;
        }else if (n%2 == 0 && (k-count)%2 == 0 && (k-count) <= ( n*n - 2*k))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
        
        
    }
    
    return 0;
} // namespace std;


