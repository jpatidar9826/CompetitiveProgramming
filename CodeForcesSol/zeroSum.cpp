#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0, flag = 0, flag1 = 0;
    cin >> n;
    int t = 4;
    int k[n];
    int p[t];
    for (int i = 1; i < 4; i++)
    {
        p[i] = 101;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];

        if (k[i] > 0 && k[i] < 100)
        {
            int j = k[i];

            if (j % 10 == 0 && flag == 0)
            {
                p[2] = k[i];
                c++;
                flag = 1;
            }
            else if (k[i] < 10 && flag1 == 0)
            {
                p[3] = k[i];
                c++;
                flag1 = 1;
            }
        }
        else if (k[i] == 0)
        {
            p[0] = 0;
            c++;
        }
        else
        {
            p[1] = 100;
            c++;
        }
    }
    if (flag == 0 && flag1 == 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (k[i] > 10 && k[i]<100)
            {
                p[2] = k[i];
                c++;
                break;
            }
        }
    }
    sort(p, p + t);

    cout << c << endl;
    for (int i = 0; i < c; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}