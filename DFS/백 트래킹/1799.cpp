#include <bits/stdc++.h>
using namespace std;

int chessBoard[11][11];
int N;
int black_result = 0, white_result = 0;
//비숍이 들어갈 수 있는 위치 검은 비숍과 흰 비숍으로 구분
vector<pair<int, int>> blackEmptyArea;
vector<pair<int, int>> whiteEmptyArea;
//비숍이 현재 있는 위치 
vector<pair<int, int>> black_bishop;
vector<pair<int, int>> white_bishop;

// 비숍은 2, 비숍이 있을 수 있는 자리는 1, 비숍이 있을 수 없는 자리는 0

bool black_promising(int idx){
    
    int x, y; 

    if(!black_bishop.empty()){
        x = blackEmptyArea[idx].first;
        y = blackEmptyArea[idx].second;
    }
    
    for(int i=0;i<black_bishop.size();i++){

    //다른 비숍의 사정 거리 안에 들어온 경우
    if(x-y == black_bishop[i].first-black_bishop[i].second || x+y == black_bishop[i].first+black_bishop[i].second) return false;

    }
    
    return true;
}


bool white_promising(int idx){

    int x, y;

    if(!white_bishop.empty()){
        x = whiteEmptyArea[idx].first;
        y = whiteEmptyArea[idx].second;
    }

    for(int i=0;i<white_bishop.size();i++){

        //다른 비숍의 사정 거리 안에 들어온 경우
        if(x-y == white_bishop[i].first-white_bishop[i].second || x+y == white_bishop[i].first+white_bishop[i].second) return false;
        
    }

    return true;
}


void black_dfs(int idx){

    if(idx == blackEmptyArea.size()) {

        if(black_result < black_bishop.size()) black_result = black_bishop.size();
        
        return;
    }

    //유망하다면 비숍을 두고 다음꺼 탐색
    if(black_promising(idx)){

        int x = blackEmptyArea[idx].first;
        int y = blackEmptyArea[idx].second;

        

        black_bishop.push_back({x, y});
        chessBoard[x][y] = 2;

        black_dfs(idx+1);

        black_bishop.pop_back();
        chessBoard[x][y] = 1;

    }
    

    black_dfs(idx+1);

}



void white_dfs(int idx){

    if(idx == whiteEmptyArea.size()) {

        if(white_result < white_bishop.size()) white_result = white_bishop.size();
        
        return;

    }

    //유망하다면 비숍을 두고 다음꺼 탐색
    if(white_promising(idx)){

        int x = whiteEmptyArea[idx].first;
        int y = whiteEmptyArea[idx].second;

        

        white_bishop.push_back({x, y});
        chessBoard[x][y] = 2;

        white_dfs(idx+1);

        white_bishop.pop_back();
        chessBoard[x][y] = 1;

    }
    

    white_dfs(idx+1);

}


int main(){
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> chessBoard[i][j];

            if(chessBoard[i][j] == 1){
                if((i+j)%2 == 0) blackEmptyArea.push_back({i, j});
                else whiteEmptyArea.push_back({i, j});
            } 
        }
    }

    white_dfs(0);
    black_dfs(0);

    cout << black_result + white_result;

    return 0;
}