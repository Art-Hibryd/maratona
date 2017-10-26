#include <bits/stdc++.h>
#define MAXN 100000
using namespace std;

int keys[1005];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int mykey, lkkey;

	cin >> mykey >> lkkey;
	int n; cin >> n;
	for(int i = 0 ; i < n; ++n)
		cin >> keys[i];
	int tm[100005];
	memset(tm , -1, sizeof(tm));

	queue<int> q;
	q.push(mykey);
	tm[mykey]=0;
	while(!q.empty())
	{	
		int64_t val = q.front(); q.pop();
		
		if(val == lkkey)
			break;
		for(int i=0; i < n; i++)
		{
			int64_t kk = keys[i];
			kk=kk*val;
			kk%=MAXN;
			if(tm[kk]==-1)
			{
				tm[kk]= tm[val]+1;
				q.push(kk);
			}
		}

	}
	cout << tm[lkkey]<<'\n';
	return 0;
}