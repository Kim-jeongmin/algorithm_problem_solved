#include <bits/stdc++.h>
using namespace std;

int main(){

  string str; cin >> str;
  stack<char> st;

  for(int i=0;i<str.size();i++){
    if('A' <= str[i] && str[i] <= 'Z') cout << str[i];
    else {
      if(str[i] == '*' || str[i] == '/') {
        while(!st.empty() && (st.top() == '*' || st.top() == '/')){
          cout << st.top();
          st.pop();
        }
        st.push(str[i]);
      }
      else if(str[i] == '+' || str[i] == '-') {
        while(!st.empty() && st.top() != '('){
          cout << st.top();
          st.pop();
        }
        st.push(str[i]);
      }
      else if(str[i] == ')'){
        while(!st.empty() && st.top() != '('){
          cout << st.top();
          st.pop();
        }
        st.pop();
      }
      else st.push(str[i]);
    }
  }

  while(!st.empty()){
    cout << st.top();
    st.pop();
  }
}