#include <bits/stdc++.h>

using namespace std;

// 树状数组
// 计算区间的数组之和，更新数组中的元素

const int maxn = 100010;

int bit[maxn + 1], n;

int sum(int i){
  int s = 0;
  while(i > 0) {
    s += bit[i];
    i -= i & -i;
    // 等价于 i = i & (i - 1);
  }
  return s;
}

void add(int i, int x){
  while(i <= n) {
    bit[i] += x;
    i += i & -i;
  }
}

int main() {


  return 0;
}