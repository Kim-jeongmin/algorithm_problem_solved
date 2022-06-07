#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;
 
int arr[MAX];
int LIS[MAX];
int record[MAX];
int result_lis[MAX];
 
int binary_search(int left, int right, int target){
 
    int mid;
 
    while(left < right){
 
        mid = (left + right) / 2;
 
        if(LIS[mid] < target) left = mid + 1;
        else right = mid;
 
    }
 
    return right;
}
 
int main(){
 
    ios::sync_with_stdio(0);
	cin.tie(0);
 
    int N; cin >> N;
 
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
 
    int j = 0, i = 1;
    LIS[0] = arr[0];
    record[0] = 1;
 
    while(i < N){
 
        if(LIS[j] < arr[i]){
            LIS[j+1] = arr[i];
            j++;
            record[i] = j+1;
        }
        else {
            int idx = binary_search(0, j, arr[i]);
            LIS[idx] = arr[i];
            record[i] = idx+1;
        }
 
        i++;
    }
 
    cout << j+1 << '\n';

    int cnt = 0;
    int result_MAX = j+1;

    for(int i=N-1;i>=0;i--) {
      if(record[i] == result_MAX){
        result_lis[cnt++] = arr[i];
        result_MAX--;
      }
    }

    for(int i=cnt-1;i>=0;i--){
      cout << result_lis[i] << ' ';
    }
 
}