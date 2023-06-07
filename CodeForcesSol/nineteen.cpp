#include <bits/stdc++.h>
using namespace std;
// nineteen

int main()
{
    string s;
    cin >> s;
    int n[26] = {0};
    int flag = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == 'a' + j)
            {
                n[j]++;
            }
        }
    }
    //cout << c << " " << n[4] << " " << n[8] << " " << n[13] << " " << n[19] << " ";
    while (flag != 1)
    {
        if (c == 0)
        {
            if (n[4] - 3 > -1 && n[8] - 1 > -1 && n[13] - 3 > -1 && n[19] - 1 > -1)
            {
                n[4] = n[4] - 3;
                n[8] = n[8] - 1;
                n[13] = n[13] - 3;
                n[19] = n[19] - 1;
                c++;
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            if (n[4] - 3 > -1 && n[8] - 1 > -1 && n[13] - 2 > -1 && n[19] - 1 > -1)
            {
                n[4] = n[4] - 3;
                n[8] = n[8] - 1;
                n[13] = n[13] - 2;
                n[19] = n[19] - 1;
                c++;
            }
            else
            {
                flag = 1;
            }
        }
        
    }
    cout << c;

    return 0;
}