#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, c, ans = 0, tm;
    cin >> n >> a >> b >> c;
    int x, y, z, zc;
    for (int x = 0; x <= 4000; x++)
    {
        for (int y = 0; y <= 4000; y++)
        {
            zc = n - (a * x + b * y);
            if (zc < 0)
                break;

            double z = (zc / (double)c);
            if (z == (int)z)
                ans = max(ans, (int)z + x + y);
        }
    }
    cout << ans << endl;
}
