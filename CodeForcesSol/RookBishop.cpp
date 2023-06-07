#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, rook, bis, king;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2 && y1 == y2)
    {
        cout << "0 0 0";
        return 0;
    }

    if (x1 == x2 || y1 == y2)
    {
        rook = 1;
    }
    else
    {
        rook = 2;
    }

    if (abs(x1 - x2) == abs(y1 - y2))
    {
        bis = 1;
    }
    else if ((x1 + y1) % 2 == 0 && (x2 + y2) % 2 == 0)
    {
        bis = 2;
    }
    else if ((x1 + y1) % 2 == 1 && (x2 + y2) % 2 == 1)
    {
        bis = 2;
    }
    else
    {
        bis = 0;
    }

    if (x1 == x2 || y1 == y2)
    {
        king = max(abs(x2 - x1), abs(y2 - y1));
    }
    else if (abs(x1 - x2) == abs(y2 - y1))
    {
        king = abs(x1 - x2);
    }
    else
    {
        king = max(abs(x2 - x1), abs(y2 - y1));
    }
    cout<<rook<<" "<<bis<<" "<<king;

    return 0;
}