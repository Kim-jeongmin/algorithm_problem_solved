#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a; cin >> a;
    vector<int> v(a);
    for(int i=0;i<a;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int b; cin >> b;
    for(int i=0;i<b;i++){
        int num; cin >> num;
        int right = a-1;
        int left = 0;
        int mid;
        int cnt = 0;
        while(left <= right){
            mid = (right + left) / 2;
            if(v[mid] > num) right = mid - 1;
            else if(v[mid] < num) left = mid + 1;
            else {
                vector<int>::iterator low, up;
                up = upper_bound(v.begin(),v.end(),num);
                low = lower_bound(v.begin(), v.end(), num);
                cnt = up - low;
                break;
            }
        }
        cout << cnt << ' ';
    }
}