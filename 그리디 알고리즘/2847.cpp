#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> v(N);
    int result = 0;

    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    for(int i=N-1;i>=1;i--){
        if(v[i] <= v[i-1]) {
            result += v[i-1] - v[i] + 1;
            v[i-1] = v[i] - 1;
        }
    }

    cout << result;
}