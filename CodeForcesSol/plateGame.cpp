#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, b, r, c = 0;
    cin >> l >> b >> r;
    int d = r + r;
    if (d > min(l, b))
    {
        cout << "Second";
    }
    else cout << "First";

    return 0;
}