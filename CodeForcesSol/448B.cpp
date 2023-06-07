#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, p;
    cin >> s >> t;
    string tc = t;
    int f = 0;
    int l[26] = {0};
    int m[26] = {0};
    int count = 0;
    if (s == t)
    {
        cout << "array";
        return 0;
    }
    if (s.size() < t.size())
    {
        cout << "need tree";
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int d = s[i] - 'a';
        
        l[d]++;
        
    }
    for (int i = 0; i < t.size(); i++)
    {
        
        int q = t[i] - 'a';
        
        m[q]++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (l[j] < m[j])
        {
            cout << "need tree";
            return 0;
        }
    }
    if (s.size()==t.size())
    {
        cout<<"array";
        return 0;
    }
    

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < tc.size(); j++)
        {
            if (s[i] == tc[j])
            {
                char c = s[i];
                p.push_back(c);
                break;
            }
        }
    }

    if (p.size() < t.size())
    {
        cout << "need tree";
        return 0;
    }

    string y;
    for (int i = 0; i < t.size(); i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (t[i] == p[j])
            {
                y.push_back(p[j]);
                p[j] = '0';
                break;
            }
            else
            {
                p[j] = '0';
            }
        }
    }
    
    if (y == t)
    {
        cout << "automaton";
        return 0;
    }

    cout << "both";

    return 0;
}