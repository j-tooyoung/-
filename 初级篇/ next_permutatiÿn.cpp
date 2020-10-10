#include <bits/stdc++.h>
using namespace std;

// n排列 [0,1,2,...n-1] 全排列算法
// todo
const int N = 1010;
bool used[N];


void pertumation1(int n,int pos){
    if(pos == n){
        return;
    }
    for(int i = 0; i < n; i++){
        if(!used[i]){
            used[i] = true;
            pertumation1(n, pos + 1);
            used[i] = false;
        }
    }
}

void pertumation2(int n){

}

int main(){
    int n;
    cin >> n;
    pertumation1(n,0);  
    return 0;
}