#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    int result = 0;
    for(double i=1;i<=a;i++){
        double num = i;
        num/=5;
        while(floor(num) == ceil(num)){
            result ++;
            num/=5;
        }
    }
    cout << result;
}