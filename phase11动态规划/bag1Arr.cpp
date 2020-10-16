#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10010;

//输入
int n, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N];

// 一维简化
// 01背包
void solve()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = W; j >= w[i]; j--)
    {
      dp[j] = max(dp[j], dp[j - w[i]]);
    }
  }
  cout << dp[W];
}

// 完全背包
void solve2()
{
}

int main()
{
  cin >> W;
  return 0;
}