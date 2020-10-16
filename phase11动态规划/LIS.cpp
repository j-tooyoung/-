#include <bits/stdc++.h>
using namespace std;

// 最长上升子序列 2.3.2

// 输入
const int max_n = 100010;
int n;
int a[max_n];

int dp[max_n];

// n2算法
void solve()
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    dp[i] = 1;
    for (int j = 0; j < i; j++)
    {
      if (a[j] < a[i])
      {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    res = max(res, dp[i]);
  }
  cout << res;
}

// 优化 nlogn
// 算法正确性 why todo
int dp2[max_n]; //长度为i + 1的上升子序列中末尾元素的最小值
const int INF = 0x3f3f3f3f;

void solve2()
{
  fill(dp2, dp2 + n, INF);
  for (int i = 0; i < n; i++)
  {
    // lower_bound返回指针，大于等于target的位置
    // upper_boud返回大于target的位置
    *lower_bound(dp2, dp2 + n, a[i]) = a[i];
  }
  cout << lower_bound(dp2, dp2 + n, INF) - dp2;
}

int main()
{

  return 0;
}