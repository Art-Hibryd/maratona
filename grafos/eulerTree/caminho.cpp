#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;

vector < int >  caminho;
vector < int > vizinho[MAXN];
vector< pair< int , int >, bool> deletada;

void acha_caminho(int v)
{
	for(int i = 0 ; i < vizinho[v].size(); ++i)
	{

		int viz = viźinho[v][i];
		if( deletada[ make_pair( v, viz) ] ) continue;

		deletada[make_pair(v, viz)] = true;
		deletada[make_pair(viz, v)] = true;

		acha_caminho(viz);
	}

	caminho.push_back(v);	

}