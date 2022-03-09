#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    vector<int> v(N);

    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int sum = v[0];
    
    if(v[0] > 1){
    	cout << 1;
    	return 0;
    } // 가장 작은 추의 무게가 1보다 크면 1 출력

    for(int i=1;i<N;i++){
        
        if(v[i] - 1 > sum) break; 
        sum += v[i];
    }

    cout << sum+1;
}