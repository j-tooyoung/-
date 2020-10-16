#include <bits/stdc++.h>
using namespace std;

const int max_n = 100010;

int heap[max_n], sz = 0;

void push(int x)
{
  int i = sz++;
  // 从下往上交换
  while (i > 0)
  {
    int parent = (i - 1) >> 1;

    if (heap[parent] <= x)
    {
      break;
    }
    else
    {
      heap[i] = heap[parent];
      i = parent;
    }
  }
  heap[i] = x;
}

int pop()
{
  int ret = heap[0];
  int x = heap[--sz];
  int i = 0;
  // 从上自下交换
  while (i * 2 + 1 < sz)
  {
    int a = i * 2 + 1, b = i * 2 + 2;
    if (b < sz && heap[b] < heap[a])
      a = b;
    if (heap[a] >= x)
      break;

    heap[i] = heap[a];
    i = a;
  }
  heap[i] = x;
  return ret;
}

int main()
{
  for (int i = 0; i < 20; i++)
  {
    push((int)(rand() * i));
  }
  for (int i = 0; i < 20; i++)
  {
    cout << pop() << endl;
  }

  return 0;
}
