#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

int valor[MAXN] , peso[MAXN], aguenta, tab[MAXN][MAXN];

int knapsack(int obj, int aguenta)
{

	if(tab[obj][aguenta]) return tab[obj][aguenta];

	if(obj==n || !aguenta) return tab[obj][aguenta]==0;

	int nao_coloca=knapscak(obj+1, aguenta);

	if(peso[obj]<=aguenta)
	{
		int coloca=valor[obj]+ knapsack(obj, aguenta-peso[i]);
		return tab[obj][aguenta]=max(coloca, nao_coloca);
	}
	
	return tab[obj][aguenta]=nao_coloca;
}
