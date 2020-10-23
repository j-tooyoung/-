#include <bits/stdc++.h>
using namespace std;

//
const int max_n = 100010;

int p;
int a[max_n];

// todo
void solve()
{
  set<int> set;
  for (int i = 0; i < p; i++)
  {
    set.insert(a[i]);
  }
  int n = set.size();

  int start = 0, end = 0, num = 0;
  map<int, int> count;

  int res = p;
  while (true)
  {
    while (end < p && num < n)
    {
      // 出现新的知识点
      if (count[a[end++]]++ == 0)
      {
        num++;
      }
    }
    if (num < n)
      break;
    res = min(res, end - start);
    // 某个知识点为0
    if (--count[a[start++]] == 0)
    {
      num--;
    }
  }

  cout << res;
}

int main()
{
}