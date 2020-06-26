#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a; cin >> a;
    vector<int> v(22);
    v[1] = 1; v[2] = 2; v[3] = 4; v[4] = 7;
    for(int i=5;i<a+1;i++){
        if(i%2!=0) v[i] = v[i-1]*2;
        else v[i] = v[i-1]*2 -v[i-4]-v[i-5];
    }
    cout << v[a];
}