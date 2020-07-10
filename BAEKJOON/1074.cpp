#include <bits/stdc++.h>
using namespace std;

int N,r,c; 
int n = 0;
int result = -1;

void search(double num, int a, int b){
    if(num == 0) {
        if(a==r && b==c) result = n;
        n++;
        return ;
    }
    if(result != -1) return;
    num-=1;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            search(num,a+i*pow(2,num),b+j*pow(2,num));
        }
    }
}
int main(){
    cin >> N >> r >> c;
    search(N,0,0);
    cout << result;
}