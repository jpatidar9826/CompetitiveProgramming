#include <bits/stdc++.h>
using namespace std;

int main(){
    int k = 1e5+10;
    int nsum[k] = {0};
    for (int i = 1; i < k; i++)
    {
        nsum[i] = i+nsum[i-1];
    }

    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
    }
    
    
}