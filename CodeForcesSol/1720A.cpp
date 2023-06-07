#include <bits/stdc++.h>
using namespace std;

int sol(long long int a, long long int b, long long int c, long long int d)
{
    int x = a / b;
    int y = c / d;
    if (a==0||c==0)
    {
        if (a==c)
        {
            return 0;
        }
        else return 1;
        
        
    }
    
    if (a % b == 0 && c % d == 0)
    {
        if (a / b == c / d)
        {
            return 0;
        }
        else if (x % y == 0 || y % x == 0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (a % b == 0)
    {
        if (c == x)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (c % d == 0)
    {
        if (a == y)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        if (a == c)
        {
            if (b % d == 0 || d % b == 0)
            {
                return 1;
            }
        }
        else if (b == d)
        {
            if (a % c == 0 || c % a == 0)
            {
                return 1;
            }
        }
        else if (a % c == 0 || c % a == 0)
        {

            return 3;
        }
        else if (b % d == 0 || d % b == 0)
        {
            return 3;
        }
    }
    return 4;
}

int main()
{
    int n;
    cin >> n;

    long long int z[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> z[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << sol(z[i][0], z[i][1], z[i][2], z[i][3]) << endl;
    }

    return 0;
}