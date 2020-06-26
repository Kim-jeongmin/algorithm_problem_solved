#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a; cin >> a;
    stack<pair<int,int>> s;
    for(int i=1;i<=a;i++){
        int num; cin >> num;
        int result = 0;
        while(!s.empty()){
            if(s.top().second >= num){
                result = s.top().first;
                break;
            }
            else s.pop();
        }
        s.push({i,num});
        cout << result << ' ';
    }
}