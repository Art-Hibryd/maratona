#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

long long dp[MAXN], N, M;
vector<long long> c;

long long change(long long troco, vector<long long> &c)
{
	if(troco == 0) return 1;

	if(troco < 0 ) return 0;

	if(dp[troco] >= 0) return dp[troco];

	int k = c.size();
	for(int i = 0 ; i < k; ++i)
		if(change(troco-c[i], c)) return dp[troco-c[i]]= 1;

	return dp[troco] = 0 ;

}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> N >> M;
	long long k;
	for (long long i = 0 ; i < N; ++i)
	{
		cin >> k;
		c.push_back(k);
	}

	memset(dp, -1, sizeof(dp));
	if(change(M, c))
		cout << "S\n";
	else
		cout << "N\n";

	return 0;

}
