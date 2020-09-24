#include <stdio.h>


// 记录每次数组结果
void trace(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    if (i > 0) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}