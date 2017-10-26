#include <bits/stdc++.h>
#define MAXN 310

using namespace std;

vector< pair<int, int> > marked;
int ar[MAXN], matrix[MAXN][MAXN], n;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n ;
	for(int i=0; i<n ;++i)
		cin >> ar[i];
	for(int i=0; i < n;++i)
	{
		for(int j=0; j < n; ++j)
		{
			cin >> matrix[i][j];
			if(matrix[i][j]) marked.push_back(make_pair(i, j));
		}
	}

	for(int i = 0 ; i < n; ++i)
	{
		for(int j = 0 ; j < n; ++j)
		{
			if(ar[marked[j].first] < ar[marked[j].second]) swap(ar[marked[j].first], ar[marked[i].second]);
		}
	}

	for(int i = 0 ; i < n ; ++i)
		cout <<ar[i] <<" ";
	cout << endl;
	return 0;
}

