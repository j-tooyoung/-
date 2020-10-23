#include <bits/stdc++.h>
using namespace std;

const int max_n = 10010;
int n, k;
int w[max_n], v[max_n];
int a[max_n];

// 最大化最小值
bool check(int x)
{
  for (int i = 0; i < n; i++)
  {
    a[i] = v[i] - w[i] * x;
  }
  double sum = 0;
  sort(a, a + n);
  for (int i = 0; i < k; i++)
  {
    sum += a[n - 1 - i];
  }
  return sum >= 0;
}

int main()
{
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> w[i] >> v[i];
  }
  double lo = 0, hi = max_n;

  // 计算多次
  for (int i = 0; i < 100; i++)
  {
    double mid = (1 + lo + hi) / 2;
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