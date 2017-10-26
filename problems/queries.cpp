#include <bits/stdc++.h>

using namespace std;

string s;
int n, a, b, dp[100005];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> s;int sum, i=1;
	cin >> n;
	for(char c : s)
		c == '.'?dp[i++]=1 : dp[i++]=-1;
	for(int i=1; i < s.size()-1; ++i)
		dp[i+1]+=dp[i];			
	
	while(n--)
	{
		cin >> a >> b;
		cout << abs( dp[b] - dp[a] )<<'\n';
	}
	return 0;
}

