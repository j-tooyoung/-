#include <bits/stdc++.h>
using namespace std;

// 01背包

// 输入
const int max_n = 10010;
int n, weight;
int w[max_n], v[max_n];
// 记忆化搜索
int dp[max_n][max_n];

// 重叠子问题计算
int rec(int i, int j)
{
  int ans;
  // 已经计算过直接使用之前的结果
  if (dp[i][j] >= 0)
  {
    return dp[i][j];
  }
  if (i == n)
  {
    ans = 0;
  }
  else if (j < w[i])
  {
    // 无法选择这个物品
    ans = rec(i + 1, j);
  }
  else
  {
    ans = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  dp[i][j] = ans;
  return ans;
}

void solve()
{
  memset(dp, -1, sizeof(dp));
  cout << rec(0, weight);
}

int main()
{
  cin >> n >> weight;
  for (int i = 0; i < n; i++)
  {
    cin >> w[i] >> v[i];
  }
  solve();
  return 0;
}