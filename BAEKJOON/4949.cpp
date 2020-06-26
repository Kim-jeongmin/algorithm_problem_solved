#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        stack<char> s;
        if(str==".") break;
        for(int i=0;i<str.size();i++){
            if(str[i] == '[') s.push('[');
            else if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') s.pop();
                else s.push(']');
            }
            if(str[i] == '(') s.push('(');
            else if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') s.pop();
                else s.push(')');
            }
        }
        if(s.empty()) cout << "yes\n";
        else cout << "no\n";
    }
}