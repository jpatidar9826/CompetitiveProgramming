#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {   
        vector<int> a;
        vector<int> b;
        int counter = 0;
        int n;
        cin>>n;
        int amax = 0;
        int bmax = 0;

        for (int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        
        for (int j = 0; j < n; j++)
        {
            if (a[j] > b[j])
            {
                swap(a[j] , b[j]);
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            if (amax <= a[j])
            {
                amax = a[j];
            }
            if (bmax <= b[j])
            {
                bmax = b[j];
            }
            
        }

        if (amax == a[n-1] && bmax == b[n-1])
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
        
        
        
    }

    


    return 0;

}