#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    pri
    int store[1<<7];
    int cnt = 0;

    for(int i=0;i<n;i++) cin >> store[i];

    int a, b; cin >> a >> b;
    
    for(int i=0;i<n;i++){
        store[i] -= a;
        cnt++;
        while(store[i] > 0){
            store[i] -= b;
            cnt++;
        }
    }

    cout << cnt;
}