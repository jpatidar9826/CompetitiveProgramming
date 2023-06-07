#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,f1=0,f2=0,l=1,r=1;
    cin>>n;
    long long int a[n+2];
    int c[n];
    a[n+1] = 2e9;
    a[0] = -1;
    for (int i = 1; i < n+1; i++)
    {
        cin>>a[i];
        c[i] = a[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        if (a[i]>a[i+1] && f1==0)
        {
            f1 = 1;
            l = i;
        }
        else if (a[i]<a[i+1] && f1==1)
        {
            f2 = 1;
            f1=2;
            r=i;
        }
        if (a[i]>a[i+1] && f2==1)
        {
            cout<<"no";
            return 0;
        }
        
    }
    if (a[l]<a[r+1]&&a[r]>a[l-1])
    {
        cout<<"yes"<<endl<<l<<" "<<r;
    }
    else cout<<"no";
    
    
    
    
    
    
    return 0;
}