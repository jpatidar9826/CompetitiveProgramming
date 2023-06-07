#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, m;
    cin >> n >> m;
    long long int p = n % m;
    long long int k = n / m;
    long long int r = p + k;
    long long int s = (n - (m - 1));
    
    

    cout << p*(k*(k+1))/2+(m-p)*(k*(k-1))/2 << " " << (s * (s - 1)) / 2;

    return 0;
}