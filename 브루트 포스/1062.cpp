#include <bits/stdc++.h>
using namespace std;

int N, K, result = 0;
int arr[26];
string str[51];

void back_tracking(int cnt, int pos){

    if(cnt == K){

        int temp = 0;
        for(int i=0;i<N;i++){
            
            bool flag = true;
            for(int j=4;j<str[i].size()-4;j++){
                if(!arr[str[i][j] - 'a'])  {
                    flag = false;
                    break;
                }
            }

            if(flag) temp++;
        }

        result = max(result, temp);

        return;
    }

    for(int i=pos;i<26;i++){
        if(arr[i] == 2) continue;
        arr[i] = 1;
        back_tracking(cnt + 1, i + 1);
        arr[i] = 0;
    }
}

int main(){

    arr['a' - 'a'] = 2;
    arr['n' - 'a'] = 2;
    arr['t' - 'a'] = 2;
    arr['i' - 'a'] = 2;
    arr['c' - 'a'] = 2;

    cin >> N >> K;
    for(int i=0;i<N;i++) cin >> str[i];
    
    if(K >= 5) back_tracking(5, 0);

    cout << result;
}