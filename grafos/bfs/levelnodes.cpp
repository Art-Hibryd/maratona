#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

bool visited[MAXN];
int lvl[MAXN], N;
vector<int> adj[MAXN];

void bfs(int x)
{
	queue<int> q;
	visited[x] = true;
	lvl[x] = 0;
	q.push(x);
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		int k = adj[s].size();
		for(int i=1; i <= k;++i)
		{
			if( !visited[ adj[s][i] ] )
			{
				visited[ adj[s][i] ] = true;
				q.push( adj[s][i] );
				lvl[ adj[s][i] ] = lvl[s] + 1;

			}
		}
	
	}	
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int a, b, x, nodes=0
;	cin >> N;

	for(int i = 1 ; i <= N; ++i)
	{
		cin >> a >> b;
		adj[a].push_back(b);
		
	}
	cin >> x;
	for(int i = 1; i <= N; ++i)
	{
		if(lvl[i] == x)
			nodes++;
	} 
	bfs(1);
	cout << nodes <<"\n";
	return 0; 
}

