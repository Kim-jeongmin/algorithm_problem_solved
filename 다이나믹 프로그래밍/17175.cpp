#include <iostream>
#include <vector>
using namespace std;

vector<long long> v(51);

int main(){
    int a; cin >> a;
    v[0] = 1; v[1] = 1;
    if(a >= 2){
        for(int i=2;i<=a;i++){
            v[i] = v[i - 1] + v[i - 2];
            v[i] += 1;
        }
    }
    cout << v[a] % 1000000007;
}