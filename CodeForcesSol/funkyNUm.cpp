#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n==1)
    {
        cout<<"NO";
        return 0;
    }
    

    for (long long int i = 1; i < sqrt(n); i++)
    {
        long long int a = (i * i + i);
        long long int b = 1 + 8 * n - 4 * a;
        double c = sqrt(b);
        
        long long int k = sqrt(b);
        //cout<<c<<" "<<k;
        if (c == k && k % 2 == 1)
        {

            long long int d = (k - 1) / 2;
            //cout << d << " " << i;
            if (a + (d * d + d) == 2 * n)
            {
                cout << "YES";
                return 0;
            }
            d = (k + 1) / 2;
            if (a + (d * d + d) == 2 * n)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}