#include <bits/stdc++.h>
#define MAX 17000000
#define CITY 16

using namespace std;

int n;
int arr[CITY][CITY];
int D[1 << CITY][CITY] = { 0 };

int TSP(int visit, int now){
  
  visit |= (1 << now);

  if(visit == (1 << n) - 1){
    if(arr[now][0] > 0) {
      return arr[now][0];
    }
    return MAX;
  }

  int& ret = D[visit][now];

  if(ret > 0) return ret;
  ret = MAX;
  for(int i=0;i<n;i++){

    if(i != now && (visit&(1<<i)) == 0 && arr[now][i] > 0){
      int temp = TSP(visit, i) + arr[now][i];
      if(ret > temp) ret = temp;
    }
  }
  return ret;
}

int main(){

  int result;
  cin >> n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> arr[i][j];
    }
  }

  result = TSP(0, 0);
  if (result == MAX) printf("-1\n");
	else printf("%d\n", result);
  return 0;
}