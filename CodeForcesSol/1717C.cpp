#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int s[t];
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int flag = 0;
        int flag2 = 0;
        int flag3 = 0;
        int flag4 = 0;
        vector<int> a;
        vector<int> b;

        for (int j = 0; j < n; j++)
        {
            int r;
            cin>>r;
            a.push_back(r);
        }
        for (int j = 0; j < n; j++)
        {
            int r;
            cin>>r;
            b.push_back(r);
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j]!=b[j])
            {
                flag = 1;
                break;
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j]>b[j])
            {
                flag2 = 1;
                break;
            }
            
        }
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]!=b[j] && b[j]-b[j+1]>1)
            {
                flag3 =1;
                break;
            }
            
        }
        if (a[n-1]!=b[n-1] && b[n-1]-b[0]>1)
        {
            flag4 = 1;
        }
        if (flag == 0)
        {
            s[i] = 1;
        }
        else
        {
            if (flag2 == 1 || flag3 == 1||flag4 == 1)
            {
                s[i] = 0;
            }
            else
            {
                s[i]=1;
            }
            
            
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (s[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    

   
    return 0;
}