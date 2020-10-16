#include <bits/stdc++.h>

using namespace std;

// 计数问题 2.3.3
// todo ?
// 计数问题 n的m划分，n种无区别物品划分成不超过m组的方法数
// 递推式
// dp[i][j] = dp[i][j - i] + dp[i - 1][j]

// 输入
const int max_n = 100010;

int n, m;
int dp[max_n][max_n];
int mod;

void solve()
{
  dp[0][0] = 1;
  for (int i = 1; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (j > i)
      {
        dp[i][j] = (dp[i][j - i] + dp[i - 1][j]) % mod;
      }
      else
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[m][n];
}

int main()
{
  return 0;
}