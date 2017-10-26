//obs: esse algortimo funciona para um vetor ordenado.


// a função que está implementada é uma busca binária.
#include <bits/stdc++.h>

using namespace std;

#define MAXN 1005

int n, m, vetor[MAXN];

int buscab(int x)
{
	int ini=1, fim=n, meio;
	while(!(ini > fim))
	{
		meio = (ini + fim)/2;
		if( vetor[meio] == x) return meio;
		if(vetor[meio] < x) ini = meio + 1;
		if(vetor[meio] > x ) fim = meio - 1;				
	} 	 	
	
	return -1;
}


