#include <bits/stdc++.h>
using namespace std;

int arr[102][102];
int num;

int floyd(){
  for(int i=1;i<=num;i++){
    for(int j=1;j<=num;j++){
      for(int k=1;k<=num;k++){
        if(arr[i][k] < arr[i][j] + arr[j][k]) arr[i][k] = arr[i][j] + arr[j][k]
      }
    }
  }
}

int main(){
  cin >> num;
  int A, B; cin >> A >> B;
  int n; cin >> n;
  for(int i=0;i<n;i++){
    int x, y; cin >> x >> y;
    arr[x][y] = arr[y][x] = 1;
  }

  floyd();

  cout << arr[A][B];

}