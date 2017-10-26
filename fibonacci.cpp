#include <bits/stdc++.h>

using namespace std;

int mult(int a[2][2], int *b)
{

	int *temp = (int*) malloc(2 * sizeof(int));
	temp[0] = a[0][0]*b[0] + b[1]*a[0][1];
	temp[1] = b[0]*a[1][0] + b[1]*a[1][1];
	return temp;
}

int pot(int exp)
{
	exp--;
	while(exp--)
	{
		if(exp && 1)
			mult(M, R);
		else
			mult(M, M), exp--;
	}
	return M[0][0];

}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int a[2][2] = {{1,1} , {1,0}};
	int b[] = {1, 1};
	int *c = pot(a, b, 3);
	cout << c[0] <<' '<< c[1] <<'\n';
	return 0;

}
