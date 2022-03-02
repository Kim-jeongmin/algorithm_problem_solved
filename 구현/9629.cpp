#include <bits/stdc++.h>
using namespace std;

char arr[20][20];

int main(){
    int M, N; cin >> M >> N;
    int U, L, R, D; cin >> U >> L >> R >> D;

    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1) arr[i][j] = '#';
            else arr[i][j] = '.';
        }
    }

    for(int i=U;i<U+M;i++){
        for(int j=L;j<L+N;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<U+M+D;i++){
        for(int j=0;j<L+N+R;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    
}