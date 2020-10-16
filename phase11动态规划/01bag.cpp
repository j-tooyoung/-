#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// 2.3.1 记忆化搜索
const int MAX_N = 10010;
//输入
int n, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N][MAX_N];

// 记忆化搜索，使用二维数组保存（i,j)状态下的结果，避免重复计算
int rec(int i, int j)
{
  int res;
  if (dp[i][j] >= 0)
  {
    return dp[i][j];
  }

  if (i == n)
  {
    res = 0;
  }
  else if (j < w[i])
  {
    res = 0;
  }
  else
  {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  // 每次计算保存结果
  dp[i][j] = res;
  return res;
}

// int rec(int i, int j){
//   int res;
//   if(i == n){
//     res = 0;
//   }else if(j < w[i]){
//     res = 0;
//   }else {
//     res = max(rec(i + 1,j), rec(i + 1, j -w[i]) + v[i]);
//   }
//   return res;
// }

void solve()
{
  // 调用之前，初始化dp
  memset(dp,-1,sizeof(dp));
  cout << rec(0, W);
}

int main()
{

  return 0;
}