#include <bits/stdc++.h>

using namespace std;

int pai[100005];
long long points[100005];

int f(int x)
  {return pai[x] == x ? x : pai[x] = f(pai[x]);}

void j(int x , int y)
{
  points[f(x)] += points[f(y)];
  pai[f(y)] = f(x);
}

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int n, m;
  while(cin >> n >> m, (n+m))
  {
      for(int i = 0; i < n ;++i)
      {
        cin >> points[i];
        pai[i] = i;
      }

      int acao, play1, play2, wins = 0;
      for(int i = 0 ; i < m ; ++i)
      {
        cin >> acao >> play1 >> play2;
        play1--;play2--;
        if(acao == 1)
          j(play1, play2);
        else
        {
          if(f(play1) == f(0))
            wins += points[f(play1)] > points[f(play2)];
          if(f(play2) == f(0))
            wins += points[f(play2)] > points[f(play2)];
        }
      }
      cout << wins <<'\n';
  }

  return 0;
}
