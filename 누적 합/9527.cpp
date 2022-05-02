#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll A, B; 
ll OneCnt[56]; // 이진수 자리수에 따른 1의 개수 누적합

ll CntFnc(ll x){

    ll result = x & 1LL;
    for(ll i = 54; i > 0; i--){
        if(x & (1LL << i)){
            result += OneCnt[i-1] + (x - (1LL << i) + 1);
            x -= 1LL << i;
        }
    }

    return result;

}

int main(){
    OneCnt[0] = 1;

    cin >> A >> B;

    for(int i=1;i<=55;i++){
        OneCnt[i] = OneCnt[i-1] * 2 + (1LL << i);
    }

    cout << CntFnc(B) - CntFnc(A-1);
}