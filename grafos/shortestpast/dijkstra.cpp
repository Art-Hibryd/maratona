#include <bits/stdc++.h>
#define MAXN 1000010

using namespace std;

vector<pair <int ,int> > v[MAXN];
int dist[MAXN], N ,M;
bool vis[MAXN];

void dijkstra()
{
	memset(dist, MAXN, sizeof(dist));
	memset(vis, false, sizeof(vis));
	dist[1] = 0;
	multiset <pair < int, int> > s;
	s.insert({1, 0});

	while(!s.empty())
	{
		pair< int , int > p = *s.begin();
		s.erase(s.begin());

		int x = p.second, wei = p.first;
		if(vis[x]) continue;

		vis[x] = true;
		for(int i = 0 ; i < v[x].size();++i)
		{
			int e = v[x][i].first, w=v[x][i].second;
			if(dist[x]+w < dist[e])
			{
				dist[e]=dist[x]+w;
				s.insert({dist[e], e});
			}
		}
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> N >> M;
	int a , b , w;
	for(int i = 0 ; i < M; ++i)
	{
		cin >> a >> b >> w;
		v[a].push_back({b , w});
		v[b].push_back({a , w});
	}
	
	dijkstra();
	for(int i = 1 ; i < N;++i)
	{
		if(dist[i] == MAXN)
			cout << 1000000000 <<' ';
		else
			cout << dist[i] <<' '; ;
	}
	!(dist[N] == MAXN)? cout << dist[N] <<'\n' : cout << 1000000000 << '\n';
	return 0;
}
