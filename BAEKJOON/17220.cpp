#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int arr[30][30];
int result = 0,a,b;
bool visited[30];

void search(int num){
    visited[num] = true;
    for(int j=0;j<a;j++){
        if(arr[num][j]!=0 && visited[j] == false) {
            result++;
            search(j);
        }
    }
}

void check(){
    for(int i=0;i<a;i++){
        int sum = 0;
        for(int j=0;j<a;j++){
            if(arr[j][i] == 0) sum++;
        }
        if(sum == a) q.push(i);
    }
}
int main(){
    cin >> a >> b;
    for(int i=0;i<b;i++){
        char x,y; cin >> x >> y;
        arr[x-'A'][y-'A'] = 1;
    }
    check();
    int num; cin >> num;
    for(int i=0;i<num;i++){
        char k; cin >> k;
        for(int j=0;j<a;j++){
            arr[j][k-'A'] = arr[k-'A'][j] = 0;
        }
    }
    while(!q.empty()){
        search(q.front());
        q.pop();
    }
    cout << result;
}