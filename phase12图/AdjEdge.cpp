
#include <bits/stdc++.h>

using namespace std;

//邻接表
const int max_n = 100010;

vector<int> G[max_n];
//
// struct edge {
//   // int from;
//   int to;
//   int cost;
// }
// vector<edge> G[max_n];

int main()
{
  int V, E;
  cin >> V >> E;
  for (int i = 0; i < E; i++)
  {
    // 从s向t连边
    int s, t;
    cin >> s >> t;
    G[s].push_back(t);
  }
  return 0;
}