#include <stdio.h>

// 记录每次数组结果
void trace(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    if (i > 0)
      printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}

void stableSort(int A[], int N)
{
  
}

int main()
{
  int N;
  // cin >> N;
  scanf("%d", &N);
  int A[N];
  for (int i = 0; i < N; i++)
  {
    // cin >> A[i];
    scanf("%d", &A[i]);
  }
  trace(A, N);
  stableSort(A, N);

  return 0;
}