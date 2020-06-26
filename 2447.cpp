#include <iostream>
using namespace std;

char arr[3000][3000];

void init() {
	for (int i = 0; i < 3000; ++i) {
		for (int j = 0; j < 3000; ++j) {
			arr[i][j] = ' ';
		}
	}
}
 
void solve(int x,int y,int num){
    if(num == 1) {
        arr[x][y] = '*';
        return;
    }
    int div = num/3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == 1 && j == 1) continue;
            else solve(x+(i*div), y+(j*div), div);
        }
    }
}

int main(){
    int a; cin >> a;
    init();
    solve(0,0,a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
}