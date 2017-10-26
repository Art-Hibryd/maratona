#include <bits/stdc++h>
#define MAXN 100010

using namespace std;

typedef long long ll;
typedef pair< long long , int > pli;
vector< pair <int , int> > v;
long long dist[MAXN];
int n, m, vis[MAXN];
priority_queue< pair< long long , int > > q;
inline void trace(int k ) {if(vis[k] != -1 ) trace(p[k]); cout << k <<' ';} 


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n >> m;int a, b , c;
	for(int i = 0 ; i < m; ++i)
	{
		cin >> a >> b >> c;
		v[a].push_back({b, c});
		v[b].push_back({a, c});
	}
	
	fill(dist, dist + n + 5, MAXN);
	
	q.push(pli (dist[1]=0, 1) );
	
	while(!q.empty())
	{
		int u = q.top().second; q.pop();
		for(pli e : g[u])
		{
			int v = e.second; ll t = dist[u] + e.first;
			if(	t < dist[v]) vis[v] = u ,  q.push( -(dist[v] = t), v);
		}
	}

	if(dist[n] == MAXN){cout << "-1\n"; return 0;}
	trace(vis[n]);
	cout << n << '\n';
	return 0;
}
		
