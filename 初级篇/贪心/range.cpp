#include <bits/stdc++.h>
using namespace std;

// 区间调度问题  2-2
// 贪心算法，取决于贪心策略的选择
// 如区间调度问题：贪心策略有
// 1、 在可选的情况下，每次选择开始时间最早的那个
// 2、 在可选的情况下，每次选择结束时间最早的那个
// 3、 在可选的情况下，每次选择用时最短的那个

// 正确策略为2；可以找反例子证明
// 或者归纳法
const int MAX_N = 100000;

// 输入
int N, S[MAX_N], T[MAX_N];
pair<int, int> p[MAX_N];

void solve()
{
  for (int i = 0; i < N; i++)
  {
    p[i].first = S[i];
    p[i].second = T[i];
  }
  sort(p, p + N);
  int ans = 0;
  int pre = 0;
  // todo 有疑问
  for (int i = 0; i < N; i++)
  {
    if (pre < p[i].first)
    {
      ans++;
      pre = p[i].second;
    }
  }
  cout << ans;
}

int main()
{

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> S[i] >> T[i];
  }
  solve();
  return 0;
}