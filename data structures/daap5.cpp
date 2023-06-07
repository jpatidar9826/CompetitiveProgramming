#include <bits/stdc++.h>
using namespace std;

const int N = 500 + 10;

int arr[N], sz[N];

void initialize()
{
    for (int i = 1; i < N; ++i)
    {
        arr[i] = i;
        sz[i] = 1;
    }
}

int root(int i)
{
    while (arr[i] != i)
        i = arr[i];
    return i;
}

void Union(int a, int b)
{
    a = root(a);
    b = root(b);

    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);

        sz[a] += sz[b];
        arr[b] = a;
    }
}

double minCost(vector<pair<int, int>> &p)
{

    int n = (int)p.size();

    vector<pair<double, pair<int, int>>> cost;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {

                int x = abs(p[i].first - p[j].first) + abs(p[i].second - p[j].second);

                if (x == 1)
                {
                    cost.push_back({0, {i + 1, j + 1}});
                    cost.push_back({0, {j + 1, i + 1}});
                }
                else
                {

                    int a = p[i].first - p[j].first;
                    int b = p[i].second - p[j].second;
                    a *= a;
                    b *= b;
                    double d = sqrt(a + b);
                    cost.push_back({d, {i + 1, j + 1}});
                    cost.push_back({d, {j + 1, i + 1}});
                }
            }
        }
    }

    sort(cost.begin(), cost.end());

    initialize();

    double ans = 0.00;
    for (auto i : cost)
    {
        double c = i.first;
        int a = i.second.first;
        int b = i.second.second;

        if (root(a) != root(b))
        {
            Union(a, b);
            ans += c;
        }
    }

    return ans;
}

int main()
{

    vector<pair<int, int>> points = {
        {1, 1},
        {2, 2},
        {2, 3}};

    cout << minCost(points);

    return 0;
}