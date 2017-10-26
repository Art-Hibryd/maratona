#include <bits/stdc++.h>
#define MAXN 2005

using namespace std;
int peso[MAXN], N;
bool visited[MAXN];
vector<int> g[MAXN];

int BFS(int x)
{
	queue<int> q;
	q.push(x);
	peso[x] = 0;
	visited[x] = false; 
	int camada = 0;
	while(!q.empty())
	{
		int frente = q.front();
		q.pop();
		
		for(int i = 0 ; i < g[frente].size(); i++)
		{
			if(!visited[ g[frente][i] ])
			{
				visited[ g[frente][i] ] = true;
				q.push(g[frente][i]);
				peso[g[frente][i]] = peso[frente]++;
				camada = max(camada, peso[frente]);
			}	
		}	

	}

	return camada + 1;
}	

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> N;
	int a;
	for(int i = 1 ; i <= N; ++i)
	{
		cin >> a;
		if(a == -1)
			continue;
		else
			g[a].push_back(i);
	}
	
	cout << BFS(1) << '\n';
	return 0;
}