// #include <bits/stdc++.h>
// using namespace std;

// // 对区间【l,r】范围内同时加上x
// // 查询l,r求区间内的值

// typedef long long ll;

// const int dat_size = (1 << 18);
// const int maxn = 100010;

// // 输入
// int n, q;
// int A[maxn];
// char T[max_q];
// int L[max_q], R[max_q], X[max_q]; 


// //线段树
// // a：维护，给这个节点对应的区间内的所有元素共同加上的值
// // b： 在这个节点对应的区间中除去a之外的其他值的之和
// ll data[dat_size], datb[dat_size];

// // todo
// void add(int a, int b, int x, int k, int l, int r){
//   if(a <= l && r <= b){
//     data[k] += x;
//   }else if(l < b && a < r){
//     datb[k] += (min(b, r) - max(a, l)) * x;
//     add(a, b, x , k * 2 + 1, l, (l + r) / 2);
//     add(a, b, x, k * 2 + 2, (l + r) / 2, r);
//   }
// }

// ll sum(int a, int b, int k, int l, int r) {

// }


// int main() {

//   return 0;
// }