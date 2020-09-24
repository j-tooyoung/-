#include <stdio.h>
#include <stdlib.h>

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

int selectionSort(int A[], int N)
{
  int swapCnt = 0;
  for (int i = 0; i < N; i++)
  {
    int idx = i;
    for (int j = i + 1; j < N; j++)
    {
      if (A[j] < A[idx])
      {
        idx = j;
      }
    }

    trace(A, N);
    if (idx != i)
    {
      swap(A, i, idx);
      swapCnt++;
    }
  }
  return swapCnt;
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

  printf("%d\n", selectionSort(A, N));

  return 0;
}