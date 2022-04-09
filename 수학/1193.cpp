#include <bits/stdc++.h>
using namespace std;

int main(){
    int X; cin >> X;
    int num = 1;

    while(X > num){
        X -= num;
        num++;
    }

    
    if(num % 2 == 0) cout << X << '/' << num-X+1;
    else cout << num-X+1 << '/' << X;
}