
#include <bits/stdc++.h>
#define MAXN 105

using namespace std;

int number[MAXN];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	int m, s, sum=0, ans=0;cin >> m >> s;
	bool flag = false;
	number[0]=1;	
	if(s == 1)
	{
		for(int i = 0; i < m ; ++i)
			cout << number[i];
		cout <<' ';
		for(int i=0; i<m; ++i)
			cout << number[i];
		return 0;
	}
	sum++;
	number[m-1] = 1;
	for(int i=0; i<m; ++i)
	{
		while( (sum + number[i]) < s and number[i] < 9)
		{ number[i]++; }
		sum+= number[i];
		if(sum == s){flag=true; break;}
	}
	
	if(flag)
	{
		for(int i = m-1; i>=0;--i)
			cout << number[i];
		cout << ' ';
		for(int i=0; i < m; ++i)
			cout << number[i];
		return 0;
	}
	cout <<-1 <<' '<<-1;
	return 0;
}
