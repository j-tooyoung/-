
#include <bits/stdc++.h>
using namespace std;

int n,m;

void dfs(int matrix[][m], int x, int y){
    for(int i=-1;i<=1;i++){
        for(int j =-1;j<=1;j++){
            int newX = x +i;
            int newY = y+j;
            if(newX >=0&& newY>=0 && newX < n && newY <m && matrix[newX][newY] == 'w'){
                matrix[x][y] = '.';
                dfs(matrix, newX,newY);
            }
        }
    }
}

int main(){
    int res =0;
    cin >> n>>m;
    int matrix[n][m];
    for(int i = 0; i< n; i++){
        for(int j =0; j < m; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i< n; i++){
        for(int j =0; j < m; j++){
            if(matrix[i][j] == 'w'){
                dfs(matrix,i,j);
                res++;
            }
           
        }
    }
    cout << res << endl;
    return 0;
}