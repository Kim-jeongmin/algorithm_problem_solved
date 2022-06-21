#include <bits/stdc++.h>
using namespace std;

int N;
int arr[500010], LIS[500010], record[500010];
int MAX = 0, MAX_num = 0, start_num = 500010;
stack<int> result;

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

    cin >> N;

    for(int i=0;i<N;i++){
        int idx, num;
        cin >> idx >> num;

        MAX_num = max(MAX_num, idx);
        start_num = min(start_num, idx);

        arr[idx] = num;
    }

    int j = 1, i = start_num+1;
    LIS[1] = arr[start_num];
    record[start_num] = 1;

    while(i <= MAX_num){

        if(LIS[j] < arr[i]){
            LIS[++j] = arr[i];
            record[i] = j;
        }
        else{
            if(arr[i] == 0)  record[i] = 0;
            else{
                int idx = binary_search(1, j, arr[i]);
                LIS[idx] = arr[i];

                record[i] = idx;
            }
        }

        MAX = max(MAX, record[i]);
        i++;
    }


    for(int i=MAX_num;i>0;i--){
        if(record[i] == 0) continue;

        if(MAX == record[i]) MAX--;
        else result.push(i);
    }

    cout << result.size() << '\n';

    while(!result.empty()) {
        cout << result.top() << '\n';
        result.pop();
    }

}