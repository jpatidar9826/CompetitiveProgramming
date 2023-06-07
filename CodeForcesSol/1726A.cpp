#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
    int sol[t];
    int b[t][2001];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
        for (int j = 0; j < a[i]; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for (int i = 0; i < t; i++)
    {
       
       
        int maxofarr=-1;
        int minofarr=1000;
        int s = a[i];
        for (int j = 0; j < s; j++)
        {
            maxofarr = max(b[i][j],maxofarr);
            minofarr = min(b[i][j],minofarr);
        }
        if (minofarr == b[i][0] || minofarr == b[i][s-1] ||maxofarr == b[i][0] || maxofarr == b[i][s-1])
        {
            sol[i] = maxofarr - minofarr;
        }
        else
        {
            int t = b[i][0];
            int p = b[i][s-1];
            t = max(abs(maxofarr-t),(minofarr-t));
            p = max(abs(maxofarr-t),(minofarr-t));
            sol[i] = max(t,p);
        }

        
        
        
    }
    for (int i = 0; i < t; i++)
    {
        cout<<sol[i]<<endl;
    }
    
    
    
    return 0;
}