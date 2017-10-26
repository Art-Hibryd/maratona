#include <bits/stdc++.h>

using namespace std;

int arr[100];
int n, m;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	cin >> m >> n;
	
	for(int i=0; i < n; ++i)
		cin >> arr[i];
	
	sort(arr, arr + n);
	
	int k = 99999; 
	for(int i=0; i <= (n-m); ++i)
		k = min(arr[i + m-1]-arr[i], k); 
		
	cout << k << '\n';
	return 0;
}
