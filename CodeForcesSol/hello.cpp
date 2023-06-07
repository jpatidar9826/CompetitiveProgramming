#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b = "hello";
    cin >> a;
    int j = 0;
    int k = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[j])
        {
            j++;
            k++;
            if (k == 5)
            {
                break;
            }
        }
    }
    if (k==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    


    return 0;
}