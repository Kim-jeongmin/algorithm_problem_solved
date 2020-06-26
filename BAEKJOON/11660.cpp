#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N,M; cin >> N >> M;
    int arr[1200][1200];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int num; cin >> num;
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + num;
        }
    }
    for(int i=0;i<M;i++){
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] - arr[x2][y1-1] - arr[x1-1][y2] + arr[x1-1][y1-1] << '\n';
    }
}