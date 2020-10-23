#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

// 堆栈溢出的原因是因为在main里定义的局部变量 a[1000][1000]有将近 4MB的空间，由于
// 局部变量是在栈中进行分配的， 所以4MB的空间对于栈来说是太大了

int n;
const int max_n = 400;
int A[max_n], B[max_n], C[max_n], D[max_n];
int CD[max_n * max_n];
void solve()
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      CD[i * n + j] = C[i] + D[j];
    }
  }
  sort(CD, CD + n * n);
  long long res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int cd = -(A[i] + B[j]);
      res += upper_bound(CD, CD + n * n, cd) - lower_bound(CD, CD + n * n, cd);
    }
  }
  printf("%d\n", res);
}

// 折半枚举
int main()
{
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d%d%d%d", &A[i], &B[i], &C[i], &D[i]);
  }
  solve();
  return 0;
}