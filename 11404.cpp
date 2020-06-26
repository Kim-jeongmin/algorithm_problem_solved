#include <iostream>
using namespace std;

int arr[102][102];
int n,m,INF=12324214;

void floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }
}
int main(){
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
}