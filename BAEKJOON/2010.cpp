#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    int result = 1;
    for(int i=0;i<num;i++){
        int cnt; cin >> cnt;
        result+=cnt;
        result--;
    }
    cout << result;
}