#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    int result = 0;

    int k; cin >> k;
    vector<int> known(k);
    for(int i=0;i<k;i++) cin >> known[i];

    for(int i=0;i<M;i++){
        int cnt; cin >> cnt;

        bool flag = true;
        for(int j=0;j<cnt;j++){
            int a; cin >> a;

            for(int k=0;k<known.size();k++){
                if(a == known[k]) {
                    flag = false;
                    break;
                }
            }

            if(!flag) break;
        }

        if(flag) result++;
    }

    cout << result;
}