#include <bits/stdc++.h>
using namespace std;

int main(){
  string str; cin >> str;
  int result = 99999999;
  string num = "";
  vector<int> number;
  vector<char> opt;

  for(int i=0;i<str.size();i++){
    if('0' <= str[i] && str[i] <= '9') num.push_back(str[i]);
    else {
      opt.push_back(str[i]);
      if(num != "")  {
        number.push_back(stoi(num));
        num = "";
      }
    }

    if(i == str.size() - 1){
      number.push_back(stoi(num));
      num = "";
    }
  }

  for(int i=0;i<opt.size();i++){
    if(opt[i] == '+'){
      number[i]+=number[i+1];
      number.erase(number.begin()+i+1);
      opt.erase(opt.begin()+i);
      i--;
    }
  }

  for(int i=0;i<opt.size();i++){
    if(opt[i] == '-'){
      number[i]-=number[i+1];
      number.erase(number.begin()+i+1);
      opt.erase(opt.begin()+i);
      i--;
    }
  }

  for(int i=0;i<number.size();i++) {
    result = min(result, number[i]);
  }

  cout << result;
}