#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int arr[MAX];
int LIS[MAX];

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

    while(i < N){

        if(LIS[j] < arr[i]){
            LIS[j+1] = arr[i];
            j++;
        }
        else {
            int idx = binary_search(0, j, arr[i]);
            LIS[idx] = arr[i];
        }

        i++;
    }

    cout << j+1;


}