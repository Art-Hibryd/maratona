#include <bits/stdc++.h>
#define MAXN 105
using namespace std;

int aux[MAXN], v[MAXN];

int main()
{
	int n,m=0,k=0,s=0; cin >> n;
	for(int i=0; i<n; ++i)
	{
		cin >> v[i];
		if(v[i] == 1){m++; if(s>0) s--;} else{s++; if(s>k)k=s;}
	}
	if(k==0){cout << m-1 <<'\n'; return 0;}
	cout <<	m + k<< '\n';
	return 0;
}

