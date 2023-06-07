#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, x, y;
    cin >> n >> m >> k;
    int a[n + 1][m + 1] = {0};
    int p[k][2];
    int mini = n+m;
    for (int i = 0; i < k; i++)
    {
        cin>>p[i][0]>>p[i][1];
    }
    
    for (int i = 0; i < k; i++)
    {
        x=p[i][0];y=p[i][1];
        
        if (a[x][y] == 0)
        {
            cout << x << "t " << y << endl;
            a[x][y] = 1;
        }
        else
        {
            for (int j = 1; j < n+1; j++)
            {
                for (int t = 1; t < m+1; t++)
                {
                    if (a[j][t]==0 &&abs(x-j)+abs(y-t)<mini)
                    {
                        mini = abs(x-j)+abs(y-t);
                    }
                    
                }
                
                
            }
        }
    }

    return 0;
}