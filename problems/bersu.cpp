#include <bits/stdc++.h>

using namespace std;


int boy[105], girl[105];


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);	
	int boyz, girls, a, sum=0;
	
	cin >> boyz;
	for(int i=0; i < boyz; ++i)
		cin >> boy[i];
	
	cin >> girls;
	for(int i =0; i < girls; ++i)
		cin >> girl[i];
	
	for(int i=0; i<boyz; ++i)
	{
		for(int j=0; j<girls; ++j)
		{
			if(abs(boy[i]-girl[j]) <= 1)
			{
				girl[j] = 1000;
				sum++;
				break;
			}
		}
	}
	
	cout << sum ;
	return 0;
} 
