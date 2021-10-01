#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); 
  cin.tie(0);
  int testCase; cin >> testCase;

  while(testCase--){
    bool flag = true;
    string p, str; int n;
    cin >> p >> n >> str;
    int front = 0, back = 0;
    bool f_b = true; // true가 앞 false가 뒤
    int pos = 0;

    str = str.substr(1, str.size()-2);

    istringstream ss(str);
    string stringBuffer;
    vector<string> x;
    x.clear();
    while (getline(ss, stringBuffer, ',')){
      x.push_back(stringBuffer);
    }

    for(int i=0;i<p.size();i++){
      if(p[i] == 'R'){
        if(i+1 != p.size() && p[i+1] == 'R'){
          i++; continue;
        }
        if(f_b) {
          pos = x.size()-1-back;
          f_b = false;
        }
        else {
          pos = front;
          f_b = true;
        }
      }
      else{
        if(front >= x.size()-back){
          flag = false;
          break;
        }
        if(f_b) pos = ++front;
        else pos = x.size() - 1 - (++back);
      }
    }

    if(!flag) {
      cout << "error\n";
      continue;
    }

    if(f_b){
      cout << '[';
      for(int i=pos;i<x.size()-back;i++){
        if(i == x.size()-1-back) cout << x[i];
        else cout << x[i] << ',';
      }
    }
    else {
      cout << '[';
      for(int i=pos;i>=front;i--){
        if(i == front) cout << x[i];
        else cout << x[i] << ',';
      }
    }
    cout << "]\n";

  }
}