#include <bits/stdc++.h>
using namespace std;

long long arr[102][102];
int P[102][102];
int n,m;
long long INF=999999999;
int cnt = 0;
queue<int> q;

void path(int k, int r){
  if(P[k][r] != 0){
    path(k, P[k][r]);
    q.push(P[k][r]);
    cnt++;
    path(P[k][r], r);
  }
}

void floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j] > arr[i][k] + arr[k][j]){
                  arr[i][j] = arr[i][k] + arr[k][j];
                  P[i][j] = k;
                }
            }
        }
    }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  cin >> n >> m;
  for(int i=1;i<=n;i++) {
      for(int j=1;j<=n;j++) {
      if(i!=j) arr[i][j] = INF;
      }
  }

  for(int i=0;i<m;i++){
      int a,b,c; cin >> a >> b >> c;
      if(arr[a][b] > c) arr[a][b] = c;
  }

  floyd();

  for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(arr[i][j] != INF) cout << arr[i][j] << ' ';
        else cout << 0 << ' ';
      }
      cout << '\n';
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(arr[i][j] == 0) cout << 0 << '\n';
      else if(arr[i][j] == INF) cout << 0 << '\n';
      else {
        cnt = 0;
        q.push(i);
        path(i,j);
        q.push(j);

        cout << cnt + 2 << ' ';

        while(!q.empty()){
          cout << q.front() << ' ';
          q.pop();
        }
        cout << '\n';
      }
    }
  }
}