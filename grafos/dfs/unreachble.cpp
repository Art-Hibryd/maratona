#include <iostream>
#include <vector>
#define MAXN 100010	
using namespace std;

int N , M;

    vector <int> adj[MAXN];
    bool visited[MAXN];

    void dfs(int s) 
    {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    
        {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
    }

    void initialize() {
        for(int i = 0;i < 10;++i)
         visited[i] = false;
    }

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> N >> M; int a, b, num=0, head;

	for(int i = 1 ; i <= M; ++i)
	{
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	initialize();
	cin >> head;
	for(int i = 1;i <= N;++i)
	{
    	if(visited[i] == false)
    	{
        	dfs(i);
            num++;
         }
    }
	cout << --num <<'\n';
	return 0;
}
