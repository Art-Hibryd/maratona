//./y.out < file.in > file.out

#include <bits/stdc++.h>

#define MAXN 10005
using namespace std;

struct consulta
{
	int x, y;
};

bool cmp(consulta a, consulta b)
 			{ return a.y < b.y; }


consulta horario[MAXN];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int n, lv = 0, qtd = 0;
	cin >> n;
	
	for(int i = 1; i <= n ; ++i)
		cin >> horario[i].x >> horario[i].y;
	
	sort(horario + 1, horario + 1 + n, cmp);
	for(int i = 1 ; i <= n; ++i)
	{
		if(horario[i].x >= lv)
		{
			qtd++;
			lv = horario[i].y;
		}
	}
	cout << qtd <<'\n';
	return 0;
}
