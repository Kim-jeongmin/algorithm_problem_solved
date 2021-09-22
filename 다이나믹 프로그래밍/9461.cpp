#include <bits/stdc++.h>
using namespace std;

int main(){
  long long arr[101] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9,};

  int T; cin >> T;

  for(int i=10;i<=100;i++){
    arr[i] = arr[i-1] + arr[i-5];
  }

  int n;
  for(int i=0;i<T;i++){
    cin >> n;
    cout << arr[n-1] << '\n';
  }
}