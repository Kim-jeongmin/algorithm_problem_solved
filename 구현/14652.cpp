#include <iostream>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    int cnt = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(cnt == c) cout << i << ' ' << j;
            cnt++;
        }
    }
}