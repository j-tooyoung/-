#include <bits/stdc++.h>
using namespace std;

// 3.2.1 线段树
// 基于线段树的RMQ(range minival query)区间最小值查询
// 线段树是完美的二叉树
// 
const int maxn = 1<<17;

// 存储线段树的全局数组
int n, dat[2*maxn - 1];

// 初始化
void init(int n_){
  n = 1;
  while(n < n_) n *= 2;
  for(int i = 0; i < 2*n - 1; i++){
    dat[i] = INT_MAX;
  }
}

// 将第k个值更新为a
void update(int k, int a){
  // 叶子节点
  k += n - 1;
  dat[k] = a;
  //向上更新
  while (k > 0)
  {
    k = (k - 1) / 2;
    dat[k] = min(dat[k * 2 + 1], dat[k *2 + 2]);
  }
  
}

// 求【a,b】查询区间的最小值 
// 【l,r】k节点对应的区间
// k为节点
// 查询为query(a,b, 0, 0,n)
int query(int a, int b, int k, int l, int r){

  // 查询区间不在节点对应的区间范围内
  if(r <= a || b<= l) return INT_MAX;
  // 查询区间包含节点对应的区间
  if(r <= b && l >= a) return dat[k];
  else {
    int left = query(a, b, k * 2 + 1, l,(l + r) / 2);
    int right = query(a, b, k * 2 + 2, (l + r) / 2 + 1, r);
    return min(left, right);
  }
}


int main()
{

  return 0;
}