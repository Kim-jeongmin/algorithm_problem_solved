#include <bits/stdc++.h>
using namespace std;

int sudok[9][9];
bool flag = false;
vector<pair<int, int>> emptySquare;

bool sudokCheck(int x, int y){

    //세로, 가로
    for(int i=0;i<9;i++){
        if(sudok[i][y] == sudok[x][y] && i != x) return false;
        if(sudok[x][i] == sudok[x][y] && i != y) return false;
    }

    int start_x = x/3 * 3;
    int start_y = y/3 * 3;

    //네모
    for(int i=start_x;i<start_x+3;i++){
        for(int j=start_y;j<start_y+3;j++){

            if(sudok[i][j] == sudok[x][y] && i != x && j != y) return false;

        }
    }

    return true;
}

void dfs(int idx){

    if(idx == emptySquare.size()){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout << sudok[i][j] << ' ';
            }
            cout << '\n';
        }
        flag = true;
        return;
    }

    int x = emptySquare[idx].first;
    int y = emptySquare[idx].second;

    for(int i=1;i<=9;i++){
        sudok[x][y] = i;

        //스도쿠 만족하는지
        if(sudokCheck(x, y)){
            dfs(idx+1);
        }
        if(flag) return;
    }

    //최적의 해를 구하지 못했을 경우 다시 0 입력
    sudok[x][y] = 0;

}

int main(){
    
    // 스도쿠 판 입력
    for(int i=0;i<9;i++){

        for(int j=0;j<9;j++){
            cin >> sudok[i][j];
            if(sudok[i][j] == 0) emptySquare.push_back({i, j});
        }

    }

    dfs(0);
}