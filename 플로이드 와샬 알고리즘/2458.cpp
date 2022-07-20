#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int N, M;
int arr[501][501];
int d[501];

void floyd(){

    for(int k=1;k<=N;k++){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }
}

int main(){ 
    cin >> N >> M;

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++){
            arr[i][j] = INF;
        }
    }
    
    int a, b; 
    for(int i=0;i<M;i++){
        cin >> a >> b;
        arr[a][b] = 1;
    } 

    floyd();
    
    for(int i=1;i<=N;i++) {
        int cnt = 0;
        for(int j=1;j<=N;j++){
            if(arr[i][j] != INF) cnt++;
        }
        d[i] = cnt;
    }

    int ans = 0;

    for(int i=1;i<=N;i++){
        int cnt = 0;
        for(int j=1;j<=N;j++){
            if(i == j) continue;

            if(d[i] >= d[j]) cnt++;
        }

        if(cnt == d[i]) ans++;
    }
    
    cout << ans;
}
