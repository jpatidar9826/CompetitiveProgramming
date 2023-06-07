#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0;
    cin>>n;
    char  b[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int p=0;
        for (int j = 0; j <n; j++)
        {
           if (i-1 >= 0 && b[i-1][j] =='o')
           {
               p++;
           }
           if (i+1 < n && b[i+1][j] =='o')
           {
               p++;
           }
           if (j-1 >= 0 && b[i][j-1] =='o')
           {
               p++;
           }
           if (j+1 < n && b[i][j+1] =='o')
           {
               p++;
           }
           if (p%2==0)
           {
               k++;
           }
           
           
           
        }
        
    }
    if (k==n*n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
    
    

    return 0;
}