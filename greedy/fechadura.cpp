#include <bits/stdc++.h>

using namespace std;

#define  MAXN 10005

int pins[MAXN];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	int n, m, ans = 0 ; cin >> n >> m ;

	for(int i = 0 ; i < n ; ++i)
		cin >> pins[i] ;
	
	for(int i = 1 ; i < n ; ++i)
	{
		if(m >= pins[i-1]) 
			pins[i] += m - pins[i-1];
		else
			pins[i] -= pins[i-1] - m;
	
		ans += abs(m - pins[i-1]);
	}
	
	cout << ans << '\n'	;	
	return 0;

}
