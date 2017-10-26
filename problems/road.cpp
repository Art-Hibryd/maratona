#include <bits/stdc++.h>

using namespace std;

struct t_aresta
{
  int dist;
  int x , y;
};
int peso[MAXN];
int pai[MAXN];
t_aresta mst[MAXN], aresta[MAXN];

int union_find(int x)
{
  if(pai[x]== x) return x;
  else return pai[x] = union_find(pai[x]);
}

void join(int a, int b)
{
  a = union_find(a);
  b = union_find(b);
  if(peso[a] > peso[b]) pai[b] = a;
  else if(peso[b] > peso[a]) pai[a] = b;
  else
  {
    pai[a] = b;
    peso[b]++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int n , m; cin >> n >> m ;

}
