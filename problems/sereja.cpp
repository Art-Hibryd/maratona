#include <bits/stdc++.h>
#define MAXN 100005

using namespace std;

int a[MAXN], b[MAXN], c[MAXN], n, a;

int main()
{
	fill(c, c+ (n+1), 1);
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n;
	for(int i = 1 ; i <= n; ++i)
	{
		cin >> a[i];
		b[a[i]]++;
	}

	for(int i = 1; i <= n; ++i)
	{
		c[i] += n - i - b[a[i]];
		b[a[i]]--;
	}
	
	for(int i = 0; i < n; ++i)
	{
		cin >> a;
		cout << c[a];
	}
	
	return 0;
}
