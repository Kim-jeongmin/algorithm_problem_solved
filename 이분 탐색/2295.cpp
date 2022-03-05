#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    vector<int> v(N);
    vector<int> v_1;
    int result = 0;

    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    
    // a_1 + a_2
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            v_1.push_back(v[i] + v[j]);
        }
    }

    sort(v_1.begin(), v_2.end());

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(binary_search(v_1.begin(), v_1.end(), v[j] - v[i])) result = max(result, arr[j]);
        }
    }

    cout << result;
}