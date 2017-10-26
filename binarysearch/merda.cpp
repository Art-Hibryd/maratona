#include <bits/stdc++.h>
#define MAXN 100005

using namespace std;

int main()
{
	int n, k, p, i;
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	cin >> k;
	
	for(i = 0; i < n; ++i)
	{
		p = lower_bound(v.begin() + i + 1, v.end(), k - v[i]) - v.begin();
		if(k - v[i] == v[p])
			break;
	}		 
	cout << v[i] << ' ' << v[p] << '\n';
}
