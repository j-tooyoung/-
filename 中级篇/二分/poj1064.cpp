// #include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

// poj 1064

const int INF = 0x6FFFFFFF;
int N, K;

int main()
{

  cin >> N >> K;
  double L[N];
  for (int i = 0; i < N; i++)
  {
    cin >> L[i];
  }
  double lo = 0, hi = INF;
  // while (abs(lo - hi) > 0.000001)
  for(int j = 0; j < 100; j++){
  {
    double mid = (lo + hi) / 2;
    int count = 0;
    // for (double val : L)
    for(int i = 0; i < N;i++)
    {
      count += (int)(L[i] / mid);
    }
    if (count >= K)
    {
      lo = mid;
    }
    else
    {
      hi = mid;
    }
  }
  printf("%.2f\n", lo);
  return 0;
}