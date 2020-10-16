#include <bits/stdc++.h>
using namespace std;

// 并查集实现
const int max_n = 100010;

int par[max_n];  // 父亲
int rank[max_n]; //树的高度
// 初始化n个元素
void init(int n)
{
  for (int i = 0; i < n; i++)
  {
    par[i] = i;
    rank[i] = 0;
  }
}

void union(int x, int y)
{
  x = find(x);
  y = find(y);
  if (x == y)
    return;
  if (rank[x] < rank[y])
  {
    par[x] = y;
  }
  else
  {
    par[y] = x;
    if (rank[x] == rank[y])
      rank[x]++;
  }
}

int find(int x)
{
  if (par[x] == x)
  {
    return x;
  }
  else
  {
    x = par[x];
    return find(x);
  }
}

bool isSame(int x, int y)
{
  return find(x) == find(y);
}

int main()
{

  return 0;
}