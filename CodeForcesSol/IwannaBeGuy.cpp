#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    int l = 0;
    int s[(2 * n)];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + (2 * n));
    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == k)
        {
            k++;
            l++;
        }
    }
    if (l == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}