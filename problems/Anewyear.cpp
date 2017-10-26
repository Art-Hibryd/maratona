#include <bits/stdc++.h>
#define MAXN 30010
using namespace std;

vector<int> g[MAXN]; 
bool visitado{MAXN];
int N, t;

void BFS(int v)
{
	queue <int> q;
	q.push(v);
	while(!q.empty())
	{
		int f = q.front();
		q.pop();
		int s = g[f].size();
		for(int i=0; i<s; ++i)
		{
			if(!visitado[f])
					
	
