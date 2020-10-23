#include <bits/stdc++.h>
using namespace std;

const int max_n = 10010;
int n, m;
int a[max_n];

// 最大化最小值
bool check(int d)
{
  int last = 0;
  for (int i = 1; i < m; i++)
  {
    int idx = last + 1;
    while (idx < n && a[idx] - a[last] < d)
    {
      idx++;
    }
    if (idx == n)
      return false;
    last = idx;
  }
  return true;
}

// void solve(){

// }

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  int lo = 0, hi = n;
  while (lo < hi)
  {
    int mid = (1 + lo + hi) >> 1;
    if (!check(mid))
    {
      hi = mid - 1;
    }
    else
    {
      lo = mid;
    }
  }
  cout << lo << endl;
  return 0;
}