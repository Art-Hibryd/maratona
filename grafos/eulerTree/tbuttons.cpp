#include <bits/stdc++.h>

using namespace std;

int n, m, a;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n >> m;
	while(n<m)
	{
		m%2?m++:m/=2; a++;
	}
	cout << a + n - m;
	return 0; 
}