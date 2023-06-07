#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int subtree_sum[N]; 
int val[N];
const int M = 1e9+7; 

void dfs(int v, int par)
{
    /*
    Take action on vertex after entering the vertex
    */
    subtree_sum[v] += val[vertex];
    for (int child : g[v])
    {
        /*
        take action on child node before entering child node
        */
        if (child == p)continue;
        dfs(child, v);
        subtree_sum[v] += subtree_sum[child];
        /*
        Take action on child after exiting child node
        when you are returning
        */
    }
    /*
    Take action on vertex before exiting the vertex
    when you visited all childs of vertex
    */
}

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 0) ;
    long long ans = 0;
    for (int i = 2; i < n; i++)
    {   
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans, part1 * 1LL * part2); 
        
    }
    
    
}