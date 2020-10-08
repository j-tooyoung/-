// #include <stdio.h>
// #include <iostream>
// #include <algorithm>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;


bool hasPath(vector<int> &vec,int target,int idx){
    int size = vec.size();
    if(idx ==size ) {
       if(target ==0) return true;
        else return false;
    }
    // for(int val : vec){
        // 搜索从idx开始
    for(int i = idx; i <size; i++ ){
       return hasPath(vec,target-vec[i],idx+1) || hasPath(vec,target,idx+1);
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> vec;
    while(n--){
        int val;
        cin>>val;
        vec.push_back(val);
    }
    // sort(vec.begin,vec.end);
    int target;
    cin>>target;
    if(hasPath(vec,target,0)){
        cout<<"yes"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
