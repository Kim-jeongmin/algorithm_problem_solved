#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; getline(cin,str);
    string cmp; getline(cin,cmp);
    int result = 0;
    if(str.size() >= cmp.size()){
        for(int i=0;i<str.size()-cmp.size()+1;i++){
            if(str.substr(i,cmp.size()) == cmp){
                result++;
                i+=cmp.size()-1;
            }
        }
    }
    cout << result;
}