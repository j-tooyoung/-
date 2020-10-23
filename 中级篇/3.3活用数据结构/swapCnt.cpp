#include <bits/stdc++.h>
using namespace std;

// 冒泡排序交换的次数  逆序数

typedef long long ll;
const int maxn = 100010;

int a[maxn];
int n;
int bit[maxn];


int sum(int i){
  int s = 0;
  while(i > 0){
    s += bit[i];
    i -= i & -i;
  }
  return s;
}

void add(int i, int x){
  while(i < n){
    bit[i] += x;
    i += i & -i;
  }
}



void solve(){
  ll ans = 0;
  for(int j = 0; j < n; j++){
      ans += j - sum(a[j]);
      add(a[j],1);
  }
  printf("%lld\n", ans);
}

int main() {

  return 0;
}