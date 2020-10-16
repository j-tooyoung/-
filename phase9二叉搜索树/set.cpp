#include <bits/stdc++.h>
using namespace std;

int main()
{

  map<int, const char *> m;

  m.insert(make_pair(1, "ONE"));
  m.insert(make_pair(2, "ONE"));
  m.insert(make_pair(10, "ONE"));

  // 查找元素
  map<int, const char *>::iterator ite;

  // 便利元素
  for (ite = m.begin(); ite != m.end(); ite++)
  {
    printf("%d: %s\n", ite->first, ite->second);
  }

  ite = m.find(1);
  puts(ite->second);

  ite = m.find(3);
  if (ite == m.end())
  {
    puts("not found");
  }
  else
  {
    puts(ite->second);
  }

  puts(m[10]);

  // 删除元素
  m.erase(10);

  return 0;
}