#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

int v[MAXN], A, V;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int x, y,teste = 1;
	cin >> A >> V;

	while(A!=0 and V!=0)
	{
		
		
		for(int i = 0 ; i < V; ++i)
		{
			cin >> x >> y;
			v[x]++;v[y]++;
		}
		int tmp=v[0];
		for(int i = 1; i<=A ; ++i)
		{
			if(v[i] > tmp) tmp = v[i];
		}
		cout << "Teste " << teste << "\n";
		for(int i = 1; i<=A; ++i)
		{
			if(tmp == v[i])
				cout <<i<< " ";
		}
		cout << "\n\n";
		teste++;
		memset(v, 0, sizeof(v));
		cin >> A >> V ; 
	}
	return 0;
}
