#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int A,B,small = 2000000001;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num; cin >> num;
    vector<int> v(num);
    for(int i=0;i<num;i++) cin >> v[i];
    for(int i=0;i<num;i++){
        int right = num - 1;
        int left = i+1;
        int mid;
        while(left <= right){
            mid = (right + left) / 2;
            if(abs(small) > abs(v[i] + v[mid])){
                small = abs(v[i] + v[mid]);
                A = v[i]; B = v[mid];
            }
            if(v[mid] + v[i] > 0) right = mid - 1;
            else left = mid + 1;
        }
    }
    cout << A << ' ' << B << '\n';
    return 0;
}