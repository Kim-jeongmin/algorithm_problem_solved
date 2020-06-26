#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int num,sum=0; cin >> num;
        vector<int> v(num+1);
        for(int j=1;j<=num;j++) {
            cin >> v[j];
            sum+=v[j];
        }
        vector<int> arr(num+1);
        for(int j=0;j<=num;j++){
            arr[j] = sum - v[j];
            sum-=v[j];
        }
        int result = arr[0];
        for(int j=0;j<=num;j++){
            for(int k=j+1;k<=num;k++){
                int n = arr[j] - arr[k];
                result = max(n,result);
            }
        }
        cout << result << '\n';
    }
}