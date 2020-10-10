#include <bits/stdc++.h>
using namespace std;


// 从起点到终点的最短距离，bfs
typedef pair<int, int> p;
const int N = 1010;

int ans = 0;
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
bool vis[N][N];

int bfs(vector<vector<int>> &vec, int x, int y,int n, int m){
    queue<p> q;
    q.push(p(x,y));
    vis[x][y] =true;
    while(!q.empty()){
        p tmp = q.front();
        q.pop();
        if(vec[tmp.first][tmp.second] == 'G'){
            return ans;
        }
        for(int i = 0; i < 4; i++){
            int newX = dx[i] + tmp.first;
            int newY = dy[i] + tmp.second;
            if(newX >= 0 && newY >= 0 && newX < n && newY < m && !vis[newX][newY] && vec[newX][newY] == '.'){
                q.push(p(newX, newY));
                vis[newX][newY] = true;
            }
        }
        ans++;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>vec[i][j];
        }
    }
     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(vec[i][j] == 'S'){
              return bfs(vec,i,j,n,m);
           }
        }
    }

    return 0;
}