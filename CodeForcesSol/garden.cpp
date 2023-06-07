#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int sx = x2 - x1;
    int sy = y2 - y1;

    if (sx < 0 && sy < 0)
    {
        x3 = x1 - abs(sy);
        y3 = y1;
        x4 = x1;
        y4 = y1 - abs(sy);
    }
    else if (sx > 0 && sy > 0)
    {
        x3 = x1;
        y3 = y1+sy;
        x4 = x1+sy;
        y4 = y1;
    }
    else if (sx == 0 && sy != 0)
    {
        x3 = x1 + abs(sy);
        y3 = y1;
        x4 = x1+ abs(sy);
        y4 = x1+ abs(sy);

    }
    else
    {
        x3 = x1;
        y3 = y1 + abs(sx);
        x4 = x1+ abs(sx);
        y4 = x1+ abs(sx);

    }

    if (sx != 0 && sy != 0 && abs(sx)!=abs(sy))
    {
        cout<<"-1";
    }
    else
    {
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<" ";
    }
    
    
    

    return 0;
}