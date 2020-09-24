#include <stdio.h>

// #include "trace.cpp"

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

void swap(int A[], int i, int j)
{
  int tmp = A[i];
  A[i] = A[j];
  A[j] = tmp;
}

void bubbleSort(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    bool flag = true;
    for (int j = 0; j < N - i - 1; j++)
    {
      if (A[j] > A[j + 1])
      {
        swap(A, j, j + 1);
        flag = false;
      }
      
      trace(A, N);
    }
    if (flag)
      break;
  }
}

int main()
{
  int N;
  scanf("%d", &N);
  int A[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }

  trace(A, N);
  bubbleSort(A, N);

  return 0;
}