#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int a[t][2];
    int sol[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for (int i = 0; i < t; i++)
    {
        int x = abs(a[i][0]),y = abs(a[i][1]);
        int count=0;
        if (x>y)
        {
            int diff = x-y;
            count = 2 * diff;
            x = x - diff;
            count = count + 2 * x - 1;
        }else if (y>x)
        {
            int diff = y-x;
            count = 2 * diff;
            y = y - diff;
            count = count + 2 * y - 1;
        }else
        {
            count = 2 * x;
        }
        sol[i] = count;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<sol[i]<<endl;
    }
    
    
    

    return 0;
}