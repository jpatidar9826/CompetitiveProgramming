#include<bits/stdc++.h>
using namespace std;
int b[1e5][1e5];
int c[1e5][1e5][2];

int count(int)

int main()
{
    int t;
    cin>>t;
    int a[t][2];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i][0]>>a[i][1];
        for (int j = 0; j < a[i][0]; j++)
        {
            cin>>b[i][j];
        }
        for (int k = 0; i < a[i][1]; k++)
        {
            cin>>c[i][k][0]>>c[i][k][1];
        }
    }
    
    return 0;
}