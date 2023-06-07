#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5+10; 
vector<int> g[N];

int vis[N];
int level[N];

void bfs(int vertex) 
{   
	/*
	Take action on vertex after entering the vertex
	*/
    queue<int> q;
    q.push(vertex);
    vis[vertex] = 1;
 
	while(!q.empty()) 
	{
		/*
		take action on child node before entering child node
		*/
        int cur_v = q.front(); 
		q.pop();
        cout<<cur_v<<" ";
        for (int child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;
            }
            
        }
        
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
int main()
{
    int n;
    cin>>n;

	for(int i=0;i<n;i++)
	{ 
		int v1,v2; 
		cin>>v1>>v2;
       g[v1].push_back(v2);
	   g[v2].push_back(v1);
 
	}
    
    bfs(1);	
    for(int i=1;i<=n;i++)
    {
        cout<<i<<": "<<level[i]<<endl;
    }

	return 0;
} 