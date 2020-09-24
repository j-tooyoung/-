#include <stdio.h>



void insertSort(int A[], int N)
{
  int tmp, j;
  for (int i = 0; i < N; i++)
  {
    j = i - 1;
    tmp = A[i];
    while (j >= 0 && A[j] > tmp)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = tmp;
      trace(A, N);
  }
}

int main()
{
  int N;
  // cin >> N;
  scanf("%d",&N);
  int A[N];
  for (int i = 0; i < N; i++)
  {
    // cin >> A[i];
    scanf("%d", &A[i]);
  }
  trace(A, N);

  insertSort(A, N);
  return 0;
}