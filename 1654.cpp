#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    long long max = 0;
    vector<long long> v(a);
    for(int i=0;i<a;i++) cin >> v[i];
    long long right=100000000000, left=1 , mid;
    while(left<=right){
        long long result = 0;
        mid = (right+left)/2;
        for(int i=0;i<a;i++) result+=v[i]/mid;
        if(result>=b){
            left = mid + 1;
            if (mid > max) max = mid;
        }
        else right = mid - 1;
    }
    cout << max;
}