#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    int a = abs(x-x1);
    int b = abs(y-y1);
    double d = sqrt(pow(a,2)+pow(b,2));
    double tr = 2*r;
    int c = (int)d%r;
    double e = d/tr;
    if (d==0)
    {
        cout<<0;
    }
    else if (e == (int)e)
    {
        cout<<e;
    }
    else
    {
        cout<<(int)e+1;
    }
    
    
    return 0;
    
}