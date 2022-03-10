#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, k; cin >> N >> k;
    int cnt = 0;

    vector<int> v(N); 

    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    for(int i=0;i<N;i++){ // 연속되는 증가하는 수열의 개수를 찾기
        if(v[i] == 0) continue;

        int idx = v[i];
        v[i] = 0;
        for(int j=i+1;j<N;j++){
        	if(v[j] == 0) continue;
            if(v[j] > idx){
                idx = v[j];
                v[j] = 0;
            }
        }

        cnt++;
    }

    if(cnt <= k) cout << "YES";
    else cout << "NO";

}