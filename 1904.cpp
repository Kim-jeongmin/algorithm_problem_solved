#include <iostream>
#include <vector>
using namespace std;

vector<int> v(1000002);

int main(){
    int a; cin >> a;
    v[1] = 1; v[2] = 2;
    if(a >= 3){
        for(int i=3;i<=a;i++){
            v[i] = v[i - 1] + v[i - 2];
            v[i] %= 15746;
        }
    }
    cout << v[a];
}