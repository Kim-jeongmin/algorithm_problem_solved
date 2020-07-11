#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a; cin >> a;
    while(a--){
        int k; cin >> k;
        vector<int> v(k);
        for(int i=0;i<k;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout << 2*(v[k-1] - v[0]) << '\n';
    }
}