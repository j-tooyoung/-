#include <bits/stdc++.h>
using namespace std;

const int coins[6] = {1,5,10,50,100,500};
int cnt[6];

void solve(int n){
  int ans = 0;
  for(int i = 5; i >= 0; i--){
    int nums = min(n / coins[i], cnt[i]);
    n-= coins[i] * nums;
    ans += nums;
  }
  cout<< ans;
}

int main(){
  for(int i = 0; i < 6; i++){
    cin>>cnt[i];
  }
  int target;
  cin >> target;
  solve(target);
  return 0;
}