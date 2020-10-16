#include <bits/stdc++.h>
using namespace std;

// 完全背包 2.3.2
// n种重量和价值分别为wi, vi的物品
//总重量不超过W，
// 每种物品可以挑选任意多件
const int MAX_N = 1010;
const int MAX_V = 1010;
//输入
int n, W;
int w[MAX_N], v[MAX_N];
// 集合的定义，从第i个物品开始挑选，总重不超过j,此时物品价值最大
int dp[MAX_N][MAX_V];

void solve()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      // k多余的计算 todo
      if(j < w[i]){
          dp[i + 1][j] = dp[i][j];
      }else{
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
      }
      // for(int k =0; j - k * w[i] >=0; k++){
      //   dp[i + 1][j] = max(dp[i + 1][j],dp[i][j- k * w[i]] + k*v[i]);
      // }
    }
  }
  cout << dp[n][W];
}

int main()
{

  return 0;
}