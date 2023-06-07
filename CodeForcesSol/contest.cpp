#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l = 3 * a / 10;
    int m = a - a / 250 * c;
    int j = 3 * b / 10;
    int k = b - b / 250 * d;

    l = max(l, m);
    j = max(j, k);
    if (l > j)
    {
        cout << "Misha";
    }
    else if (j > l)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }

    return 0;
}