#include <iostream>
using namespace std;

int arr[101][101];
int cnt = 0;

int main(){
    int a; cin >> a;
    for(int i=0;i<a;i++){
        int n,m; cin >> n >> m;
        for(int i=n;i<n+10;i++) for(int j=m;j<m+10;j++) arr[i][j] = 1;
    }
    for(int i=0;i<=100;i++) for(int j=0;j<=100;j++) if(arr[i][j] == 1) cnt++;
    cout << cnt;
}