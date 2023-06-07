#include<bits/stdc++.h>
using namespace std;
int a[100000];
void sum(int i,int x,int s)
{
    int z =a[i-1];
    int prev;
    a[i-1]=x;
    int con = 0;
    for (int j = 0; j< s; j++)
    {
        con = con+1;
        for (int k = j+1; k < s; k++)
        {
            if (a[k]!=a[k-1])
            {
                con++;

            }
        }
        
        cout<<con<<endl;
    }
    a[i-1]=z;
    //return con;
    

}

int main()
{
    int n,m;
    cin>>n>>m;

    int c[m][2];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>c[i][0]>>c[i][1];
    }
    for (int i = 0; i < 1; i++)
    {
        sum(c[i][0],c[i][1],n);
    }
    return 0;
}