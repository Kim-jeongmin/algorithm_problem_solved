#include <bits/stdc++.h>
using namespace std;

char arr[3000][3000];

void isit(){
    for(int i=0;i<3000;i++) for(int j=0;j<3000;j++) arr[i][j] = ' ';
}
void solve(int x, int y, int num){
    if(num==1){
        arr[x][y] = '*';
        return;
    }
    int div_;
    if(num==3) div_ = num/3;
    else div_ = num/2;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(i==0&&j==2 || i==1&&j==1 || i==1&&j==3 || i==3){
                solve(x-div_,y+div_,div_);
            }
            else continue;
        }
    }
}
int main(){
    int a; cin >> a;
    isit();
    solve(0,0,a);
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}