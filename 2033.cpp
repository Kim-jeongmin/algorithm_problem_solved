#include <bits/stdc++.h>
using namespace std;

int main(){
    double num; cin >> num;
    int cnt = 0;
    while(1 <= num){
        num /= 10;
        cnt++;
    }
    num = floor(num + 0.5);
    while(cnt != 0){
        num *= 10;
        cnt--;
    }
    cout << num;
}