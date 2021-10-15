#include <bits/stdc++.h>
using namespace std;

int arr[1100][1100];

void div_n_cnqr(int N, int x, int y){
    
    if(N == 2){
        vector<int> v;
        v.push_back(arr[x][y]);
        v.push_back(arr[x+1][y]);
        v.push_back(arr[x][y+1]);
        v.push_back(arr[x+1][y+1]);
        sort(v.begin(), v.end());
        
        arr[x][y] = v[2];
        return;
    }
    
    div_n_cnqr(N/2, x, y);
    div_n_cnqr(N/2, x+N/2, y);
    div_n_cnqr(N/2, x, y+N/2);
    div_n_cnqr(N/2, x+N/2, y+N/2);
    
    vector<int> v;
    v.push_back(arr[x][y]);
    v.push_back(arr[x+N/2][y]);
    v.push_back(arr[x][y+N/2]);
    v.push_back(arr[x+N/2][y+N/2]);
    sort(v.begin(), v.end());
    
    arr[x][y] = v[2];
    
}

int main(){
    int N; cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    
    div_n_cnqr(N, 0, 0);
    
    cout << arr[0][0];
    
}