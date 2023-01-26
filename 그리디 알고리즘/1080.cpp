#include <bits/stdc++.h>
using namespace std;

int A[51][51], B[51][51];
int result = 0;

void change3x3(int x, int y){
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(A[i][j] == 1) A[i][j] = 0;
            else A[i][j] = 1;
        }
    }
    result++;
}

int main(){
    int N, M; cin >> N >> M;

    for(int i=0;i<N;i++) {
        string str; cin >> str;
        for(int j=0;j<M;j++) {
            A[i][j] = str[j] - '0';
        }
    }
        
    for(int i=0;i<N;i++) {
        string str; cin >> str;
        for(int j=0;j<M;j++) {
            B[i][j] = str[j] - '0';
        }
    }

    bool flag = true;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j] != B[i][j]) flag = false;
        }
    }
    if(flag) {
        cout << 0;
        return 0;
    }

    if(N < 3 || M < 3) {
        cout << -1;
        return 0;
    }

    for(int i=0;i<N-2;i++){
        for(int j=0;j<M-2;j++){
            if(A[i][j] != B[i][j]) change3x3(i, j);
        }   
    }

    flag = true;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j] != B[i][j]) flag = false;
        }   
    }

    if(flag) cout << result;
    else cout << -1;
    
}