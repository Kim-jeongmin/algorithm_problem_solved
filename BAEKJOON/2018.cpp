#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    int sum = 0, p = 1, result = 0;
    for(int i=1;i<=a;i++){
        sum += i;
        while(sum >= a){
            if(sum == a) result ++;
            sum-=p;
            p++;
        }
    }
    cout << result;
}