#include <bits/stdc++.h>

using namespace std;

int tree[100005];
int A[100005];

void build(int node, int start, int fim)
{
	if(start == fim)
		tree[node] = A[start];
	else
	{
		int mid = (start + fim)/2;
		build(2*node, start, mid);
		build(2*node + 1, mid, fim);
		tree[node] = tree[2*node] + tree[node*2 + 1];

	}
}

int query(int node, int start, int fim, int l, int r)
{
	if(r < start || fim < l)
		return 0;
	else if(l <= start && fim <= r)
		return tree[node];
	else
	{
		int mid = ( start + fim ) / 2;
		int p1 = query(2*node, start, mid, l, r);
		int p2 = query(2*node + 1, mid, fim, l, r);
		return (p1 + p2);
	}

}

void update(int node, int start, int fim, int idx, int val)
{
	if(start == fim)
		{tree[node] += val;
			A[idx] += val;}

	else
	{
		int mid = ( start + end ) / 2;
		if(start <= idx && idx <= mid)
			update(2*node, start, mid, idx, val);
		else
			update(2*node + 1, start, mid, idx, val);

		tree[node] = tree[2*node] + tree[2*node + 1];

	}
}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int n , q; cin >> n >> q;
	for(int i = 0 ; i < n ; ++i)
		cin >> A[i];
	int a1, a2; char c;
	for(int i = 0 ; i < q ; ++i)
		cin >> c >> a1 >> a2;
		if(c == 'q')
			query(
	return 0;

}
