#include <bits/stdc++.h>
using namespace std;

int a,b;
int arr[21];
int result = 0;

void dfs(int position,int sum){
    if(position >= a){
        if(sum == b) result++;
        return;
    }
    dfs(position+1,sum+arr[position]);
    dfs(position+1,sum);
}
int main(){
    cin >> a >> b;
    for(int i=0;i<a;i++) cin >> arr[i];
    dfs(0,0);
    if(b==0) result--;
    cout << result;
}