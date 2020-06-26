#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a; cin >> a;
    vector<int> v(1002);
    v[1] = 1; v[2] = 0; v[3] = 1; v[4] = 1; v[5] = 1;
    for(int i=6;i<=a;i++) {
        if(v[i-1] + v[i-3] + v[i-4] < 3) v[i] = 1;
    }
    if(v[a] == 1) cout << "SK";
    else cout << "CY";
}