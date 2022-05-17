#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll A, B, C, small = 1e18;

int main(){
    int N; cin >> N;
    vector<ll> v(N);

    for(int i=0;i<N;i++) cin >> v[i];
    

    sort(v.begin(), v.end());

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int right = N-1;
            int left = j+1;
            int mid;
            while(left <= right){
                mid = (right + left) / 2;
                if(abs(small) > abs(v[i] + v[j] + v[mid])){
                    small = abs(v[i] + v[j] + v[mid]);
                    A = v[i]; B = v[j], C = v[mid];
                }
                if(v[mid] + v[i] + v[j] > 0) right = mid - 1;
                else left = mid + 1;
            }
        }
    }

    cout << A << ' ' << B << ' ' << C;
}