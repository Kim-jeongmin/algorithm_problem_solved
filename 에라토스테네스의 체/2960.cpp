#include <bits/stdc++.h>
using namespace std;

int arr[1001], cnt = 0;

int main(){
    int N, K; cin >> N >> K;

    for(int i=2;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            if(!arr[j]) {
                arr[j] = 1;
                cnt++;
            }

            if (cnt == K) {
                cout << j;
                return 0;
            }
        }
    }
}