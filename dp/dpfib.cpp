#include <bits/stdc++.h>

using namespace std;

#define MAXN 100000007

int64_t n, t, dp[MAXN];

int64_t fib(int64_t x)
{
	if(dp[x] != -1) return dp[x];

	if(x == 0 ) return 0;
	if(x == 1 ) return 1;

	return dp[x] = ((fib(x-1))%MAXN + (fib(x-2))%MAXN)%MAXN;

}

int main()
{

	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> t;
	while(t--)
	{
		memset(dp, -1, sizeof(dp));
		cin >> n;
		cout << fib(n) << "\n";
	}
	return 0;
}





