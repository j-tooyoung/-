#include <iostream>
#include <string>
using namespace std;

int search(string pattern, string txt)
{
  int M = pattern.length();
  int N = txt.length();
  for (int i = 0; i <= N - M; i++)
  {
    int j;
    for (j = 0; j < M; j++)
    {
      if (pattern[j] != txt[i + j])
      {
        break;
      }
    }
    if (j == M)
      return i; //找到匹配
  }
  return N; // 未找到匹配
}

// 
int search2(string pattern, string txt)
{
  int M = pattern.length();
  int N = txt.length();
  int i,j;
  for (i = 0; i <= N && j < M; i++)
  {
    if(txt[i] == pattern[j]) j++;
    else {
      // 不匹配回退
      i -= j;
      j = 0;
    }
  }
  if(j == M) return i - M;
  else return N; // 未找到匹配
}


// 字符串暴力匹配
int main()
{
  string pattern, txt;

  cin >> pattern >> txt;
  cout << search(pattern, txt);
  return 0;
}
