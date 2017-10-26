#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

int arr[MAXN], n;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> n ;

	for(int i=0; i < n; ++i)
		cin >> arr[i];
	
	int ans=1,temp=1;
	for(int i=0; i < n - 1; ++i)
	{
		if(arr[i+1] < arr[i]) ans = 0;
		ans++;
		temp=max(ans, temp);
	}
	
	cout << temp << '\n';
	return 0;
}	
