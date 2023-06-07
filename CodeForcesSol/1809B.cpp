#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a[26] = {0};
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int j = 0; j < n; j++)
        {
            char temp = s[j];
            int tem1 = temp - 'a';
            cout<<tem1;
            a[tem1]++;
        }
        for (int j = 0; j < 26; j++)
        {
            char temp = j + 'a';
            while (a[j] != 0)
            {
                cout<<temp;
                a[j]--;
            }
            
        }
        cout<<endl;
        
        
         
    }
    
    return 0;

}