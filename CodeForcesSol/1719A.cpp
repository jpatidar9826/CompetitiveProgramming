#include<bits/stdc++.h>
using namespace std;
void win(int x,int y)
{
    if(y%2==0&&x%2==0)
    {
        cout<<"Tonya"<<endl;
    }
    else if(y%2==1&&x%2==1)
    {
        cout<<"Tonya"<<endl;
    }
    else
    {
        cout<<"Burenka"<<endl;

    }
    

}
int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        win(a[i][0],a[i][1]);
    }
    

    
    return 0;
}