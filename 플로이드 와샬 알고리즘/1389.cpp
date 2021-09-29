#include <bits/stdc++.h>
#define INF 1000
using namespace std;

int N, M; 
int result, min_result = 1000001;
int arr[102][102];

void Init(){
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      arr[i][j] = INF;
    }
  }
}

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

  Init();

  int A, B;
  for(int i=0;i<M;i++){
    cin >> A >> B;
    arr[A][B] = arr[B][A] = 1;
  }

  floyd();

  for(int i=1;i<=N;i++){

    int sum = 0;
    for(int j=1;j<=N;j++){
      if(i == j) continue;
      sum += arr[i][j];
    }

    if(min_result > sum) {
      result = i;
      min_result = sum;
    }

  }

  cout << result;

}