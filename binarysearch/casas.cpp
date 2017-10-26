#include <bits/stdc++.h>
#define MAXN 100005

using namespace std;

int val[MAXN] , n, k;

int buscab(int n, int x)
{
	int ini = 1 , meio, fim=n;
	while(ini <= fim)
	{
		meio = (ini+fim)/2;
		if(val[meio]==x) return x;
		(val[meio] > x) ? fim = meio - 1 : ini = meio + 1;
 	}

	return -1; 

}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> val[i];
	cin >> k;
	
	for(int i = 1; i <= n; ++i)
	{	
		if(buscab( n, k - val[i]))
			cout<< val[i] <<' ' << k - val[i] << '\n';
			break;
	}		 
	return 0;	
}
