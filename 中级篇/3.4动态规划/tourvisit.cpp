#include <bits/stdc++.h>

using namespace std;

// 旅行商问题 TSP问题
// 递推式
// dp[S][V] 从v出发访问剩余的节点，S为已经访问的顶点集合
// dp[S][0] = 0
// dp[S][v] = min{dp[SU{u}][u] + d(u, v) | u不属于S }

// 状态压缩
// S为集合，将其编码成整数，或者二叉搜索树存储，
const int max_n = 1010;
// input
int n;
int d[max_n][max_n];

int dp[1 << max_n][max_n];    //记忆化搜索

// 已经访问过的节点集合S，当前位置为v
int rec(int S, int v){
  
}

void solve(){
  memset(dp, -1, sizeof(dp));
  printf("%d\n", rec(0,0));
}

int main(){



  return 0;
}