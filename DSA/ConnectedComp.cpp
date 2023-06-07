#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
vector<vector<int>> cc;
vector<int> current_cc;

bool vis[N];

void dfs(int vertex)
{
    /*Take action after entering the vertex*/
    //cout<<vertex<<endl;
    vis[vertex]=true;
    current_cc.push_back(vertex);
    for(auto child:g[vertex])
    {
        /*Take action before entering the child*/
        if (vis[child])continue;
        /*Take action after entering the child*/
        //cout<<"parent: "<<vertex<<" child: "<<child;
        dfs(child);
        /*take action after exiting child*/

    }
    //Take action on vertex before exiting the vertex//

}


int main()
{  
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int c=0;
    for(int i=1; i<n+1; i++)
    {
        if (vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        c++;
    }
    cout<<"no. of connected components: "<<c<<endl;
    for(auto curr_cc:cc)
    {
        for (int vertex : curr_cc)
        {
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
    return 0;
}