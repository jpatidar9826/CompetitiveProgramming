#include <bits/stdc++.h>
using namespace std;

bool tri(int p1, int q1, int p2, int q2, int p3, int q3)
{
    int k = 3;
    int d[k];
    d[0] = pow(abs(p1 - p2), 2) + pow(abs(q1 - q2), 2);
    d[1] = pow(abs(p3 - p2), 2) + pow(abs(q3 - q2), 2);
    d[2] = pow(abs(p1 - p3), 2) + pow(abs(q1 - q3), 2);
    sort(d, d + k);
    if (d[0] + d[1] == d[2] && d[0] != 0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (tri(x1, y1, x2, y2, x3, y3))
    {
        cout << "RIGHT";
    }
    else if (tri(x1 + 1, y1, x2, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1 - 1, y1, x2, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1 + 1, x2, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1 - 1, x2, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2 + 1, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2 - 1, y2, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2 + 1, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2 - 1, x3, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2, x3 + 1, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2, x3 - 1, y3))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2, x3, y3 + 1))
    {
        cout << "ALMOST";
    }
    else if (tri(x1, y1, x2, y2, x3, y3 - 1))
    {
        cout << "ALMOST";
    }
    else
    {
        cout << "NEITHER";
    }

    return 0;
}