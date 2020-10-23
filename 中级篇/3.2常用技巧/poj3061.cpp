#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

const int max_n = 100000 + 50;

int n, S;
int a[max_n];

int sum[max_n];

// wrong answer
// 尺取法
void solve()
{
  scanf("%d%d", &n, &S);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    sum[i + 1] = sum[i] + a[i];
  }
  if (sum[n] < S)
  {
    puts("0");
    return;
  }
  int res = n + 1;
  for (int idx = 0; sum[idx] + S <= sum[n]; idx++)
  {
    // 二分找到最小值
    int t = lower_bound(sum + idx, sum + n, sum[idx] + S) - sum;
    res = min(res, t);
  }
  printf("%d\n", res);
}

// 双指针
void solve2()
{
  int ans = n + 1;
  int start = 0, end = 0;
  int sum = 0;
  while (true)
  {
    while (end < n && sum < S)
    {
      sum += a[end];
      end++;
    }
    if (sum < S)
      break;
    ans = min(ans, end - start);
    
    sum -= a[start];
    start++;
  }
  if (ans > n)
    ans = 0;
  printf("%d\n",ans);
  // cout << ans << endl;
}

int main()
{
  int T;
  scanf("%d", &T);
  while (T--)
  {
    solve();
  }

  return 0;
}