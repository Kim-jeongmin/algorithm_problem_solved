#include <bits/stdc++.h>
using namespace std;

int baseball[101][3];

bool bbcheck(int a, int b, int strike, int ball){ // 볼, 스트라이크 수 체크

    int cnt_s = 0; // 스트라이크 수
    int cnt_b = 0; // 볼 수

    string str_a = to_string(a);
    string str_b = to_string(b);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(str_a[i] == str_b[j]){
                if(i == j) cnt_s ++; // 자리 수가 같으므로 스트라이크 수 + 1
                else cnt_b++; // 자리 수가 다르므로 볼 수 + 1
            }
        }
    }

    return strike == cnt_s && ball == cnt_b;// 주어진 볼, 스트라이크 수와 계산한 볼, 스트라이크 수가 같을 경우 true 리턴
}

bool check(int a){ // 중복 되어있는 수 있는지, 0이 있는지 체크 있으면 false, 없으면 true 
    
    string str_a = to_string(a);

    for(int i=0;i<3;i++) {
        if(str_a[i] == '0') return false;
    }

    for(int i=0;i<2;i++){

        for(int j=i+1;j<3;j++){
            if(str_a[i] == str_a[j]) return false;
        }
    }

    return true;
}

int main(){
    int N; cin >> N;
    int result = 0;

    for(int i=0;i<N;i++){
        cin >> baseball[i][0] >> baseball[i][1] >> baseball[i][2];
        if(baseball[i][1] == 3){ // 3 스트라이크일 경우 1 출력 후 게임 종료
            cout << 1;
            return 0;
        }
    }

    for(int i=123;i<=987;i++){
        if(!check(i)) continue;
        bool flag = true;

        for(int j=0;j<N;j++){
            if(!bbcheck(baseball[j][0], i, baseball[j][1], baseball[j][2])) flag = false;
        }

        if(flag) result++;
    }

    cout << result;
}