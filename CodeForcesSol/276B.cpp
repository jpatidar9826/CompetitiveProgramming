#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int count = 0;
    int b[26]={0};
    for (int i = 0; i < a.size(); i++)
    {
        int k = a[i] - 'a';
        b[k]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (b[i]%2==1)
        {
            count++;
        }
        
    }
    if (count ==0){cout<<"First";return 0;}

    if (count%2==1){cout<<"First";return 0;}

    cout<<"Second";
    
    
    
    
    
    return 0;
}