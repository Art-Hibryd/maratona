#include <bits/stdc++.h>
#define MAXN 2010

using namespace std;

int64_t peso[MAXN], proteico[MAXN], tab[MAXN][MAXN], N, P;


int64_t knapsack(int n, int p)
{
	if(tab[n][p]) return tab[n][p];

	if(n == N || !p) return tab[n][p] = 0;

	int64_t nao_coloca=knapsack(n+1, p);

	if(peso[n] <= p)
	{
		int64_t coloca= proteico[n] + knapsack(n+1, p-peso[n]);
		return tab[n][p] = max(coloca, nao_coloca);
	}

	return tab[n][p] = nao_coloca;
}

int main()
{

	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> P >> N;
	for(int i = 0; i < N ; ++i)
		cin >> peso[i] >> proteico[i];

	cout << knapsack(0, P)<<"\n";
	return 0;
}
