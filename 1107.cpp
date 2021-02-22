#include <bits/stdc++.h>
using namespace std;

vector<int> v(10);
int N, M;

bool check(int a){
    bool result = true;
    for(int i=0;i<M;i++) if(v[i] == a) result = false;
    return result;
}

int main(){

    cin >> N >> M;
    
    for(int i=0;i<M;i++) cin >> v[i];

    int result = 100000000;
    for(int i=0;i<=1000000;i++){
        int num = i;
        int a = abs(num - N);
        int b = 0;
        bool flag = true;

        while(flag){
            if(!check(num%10)) flag = false;
            num /= 10; b++;
            if(num == 0) break;
        }

        if(flag) result = min(result, a+b);
    }

    result = min(result, abs(100-N));

    cout << result;
}