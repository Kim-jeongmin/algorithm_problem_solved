#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N, K; cin >> N >> K;
    
    if(N == 1) {
        cout << 0;
        return 0;
    }
    
    vector<int> sensor(N);
    vector<int> dis(N-1);
    for(int i=0;i<N;i++){
        cin >> sensor[i];
    }
    
    sort(sensor.begin(), sensor.end());
    
    int result = sensor[N-1] - sensor[0];

    for(int i=0;i<N-1;i++){
        dis[i] = sensor[i+1] - sensor[i];
    }
    
    sort(dis.begin(), dis.end());
    
    for(int i=N-1;i>=N-K;i--){
        result -= dis[i];
    }
    
    cout << result;
    
}
