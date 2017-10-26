#include <bits/stdc++.h>
#define MAXN 150010 

using namespace std;

int n, m, a,b;
vector< int > g[MAXN];
bool vis[MAXN];

void dfs(int v, int & vertices, int & edges)
{
	vis[v] = true;
	++vertices;
	edges += g[v].size();

	for(int u : g[v])
	{
		if(!vis[u])	dfs( u, vertices, edges); 
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n >> m;	
	while(m--)
	{
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])
		{
			int vertices = 0 , edges = 0;
			dfs(i , vertices, edges);
			if(edges != vertices * ( vertices - 1) ){cout << "NO\n"; return 0;}
		}
	}
	
	cout << "YES\n";
	return 0;
}	
