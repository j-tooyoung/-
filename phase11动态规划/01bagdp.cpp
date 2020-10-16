#include <bits/stdc++.h>
using namespace std;

// 递推动态规划dp
const int MAX_N = 1010;
//输入
int n, W;
int w[MAX_N], v[MAX_N];
// 集合的定义，从第i个物品开始挑选，总重不超过j,此时物品价值最大
int dp[MAX_N][MAX_N];

void solve()
{
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < w[i])
      {
        dp[i][j] = dp[i + 1][j];
      }
      else
      {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i] + v[i]]);
      }
    }
  }
  cout << dp[0][W] << endl;
}

// 法2：dp[i+ 1][j]定义为前i个物品，选择总重不超过j，物品价值最大
// 边界 dp[0][j] = 0
// dp[i + 1][j] = dp[i][j]  j < w[i] 第i个物品没法选择
// dp[i + 1][j] =max(dp[i][j],dp[i][j-w[i]] + v[i]) j >= w[i]

int dp2[MAX_N][MAX_N];

void solve2()
{
  for (int i = 0; i < n; i--)
  {
    for (int j = 0; j <= W; j++)
    {
      // dp[0][j] = 0;
      if (j < w[i])
      {
        dp2[i + 1][j] = dp2[i][j];
      }
      else
      {
        dp2[i + 1][j] = max(dp2[i][j], dp2[i][j - w[i]] + v[i]);
      }
    }
  }
  cout << dp2[0][W] << endl;
}

// 法2：dp[i+ 1][j]定义为前i个物品，选择总重不超过j，物品价值最大
// 边界 dp[0][j] = 0
// dp[i + 1][j] = dp[i][j]  j < w[i] 第i个物品没法选择
// dp[i + 1][j] =max(dp[i][j],dp[i][j-w[i]] + v[i]) j >= w[i]

int dp3[MAX_N][MAX_N];

void solve3()
{
  for (int i = 0; i < n; i--)
  {
    for (int j = 0; j <= W; j++)
    {
      dp3[i + 1][j] = max(dp3[i][j], dp3[i][j]);

      if (j + w[i] < W)
      {
        // 和书不一样
        dp3[i + 1][j] = max(dp3[i][j], dp3[i][j + w[i]] + v[i]);
      }
    }
  }
  cout << dp2[0][W] << endl;
}

int main()
{
}