#include<bits/stdc++.h>
using namespace std;
void sol(int n,int k )
{
    if (k==0)
    {
        cout<<"NO"<<endl;
    }
    else if( k % 2==1)
    {
        cout<<"YES"<<endl;
        for (int i = 1; i <= n; i=i+2)
        {
            cout<<i<<" "<<i+1<<endl;
        }
        
    }
    else
    {
        cout<<"YES"<<endl;
        for (int i = 1; i <= n; i=i+2)
        {
            if((i+1)%4==0)
            {
                cout<<i<<" "<<i+1<<endl;
            }
            
            
        }
        for (int i = 1; i <= n; i=i+2)
        {
            if((i+1)%4!=0)
            {
                cout<<i+1<<" "<<i<<endl;
            }
            
            
        }
        
    }
    

}

int main()
{
    int t;
    cin>>t;
    int a[t][2];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for (int i = 0; i < t; i++)
    {
        sol(a[i][0],a[i][1]);
    }
    

    
    return 0;
}