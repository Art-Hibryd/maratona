#include <bits/stdc++.h>

using namespace std;

#define MAXN 100005
#define NUMBER 1000000007

int64_t  pd[MAXN], N, T;

int64_t factorial(int64_t x)
{
	if(pd[x])
		 return pd[x] ;

	 return  pd[x] = ( (x % NUMBER) * (factorial(x-1) % NUMBER) ) % NUMBER;

}

int main()
{
	pd[0] = pd[1] = 1;
	pd[2] = 2;

	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	cin >> T;
	while(T--)
	{
		cin >> N;
		cout << factorial(N) << "\n";
		memset(pd, 0, N);
		pd[0] = pd[1] = 1;
		pd[2] = 2;
	}
	return 0;

}
