#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M; cin >> N >> M;
    int sixMin,min;
    int result = 0;
    cin >> sixMin >> min;
    for(int i=1;i<M;i++) {
        int a,b; cin >> a>> b;
        if(a<sixMin) sixMin = a;
        if(b<min) min = b;
    }
    if(sixMin < min*6) {
        while(N>=6){
            N-=6;
            result+=sixMin;
        }
    }
    else {
        while(N>=6){
            N-=6;
            result+= min * 6;
        }
    }
    if(sixMin < min*N) result += sixMin;
    else result += min*N;
    cout << result;
}