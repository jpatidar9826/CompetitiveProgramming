#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    
    int x=0,y=0;
    int flagx = 0;

    int flag1 = 0;
    int xr = 0;
    int yr = 0;
    int zr = 0;

    for (int i = 0; i < 8; i++)
    {
        if (s[i] == 'B' && flagx == 0)
        {
            x = i+1;
            flagx = 1;
        }else if (s[i] == 'B' && flagx == 1)
        {
            y = i+1;
        }

       if (s[i] == 'K')
       {
         zr = i+1;
       }
    
        if (s[i] == 'R' && flag1 == 0)
        {
            xr = i+1;
            flag1 = 1;
        }else if (s[i] == 'R' && flag1 == 1)
        {
            yr = i+1;
        }

       
    }

    if ( xr < zr && zr < yr && x%2 != y%2)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    

    return 0;
}