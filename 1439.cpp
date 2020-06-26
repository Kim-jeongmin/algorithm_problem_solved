#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str; cin >> str;
    int zero=0,one=0;
    bool ps = false;
    if(str[0] == '0') zero++;
    else {
        one++;
        ps = true;
    }
    for(int i=1;i<str.size();i++){
        if(str[i] == '1'){
            if(ps==false) one++;
            ps = true;
        }
        else{
            if(ps==true) zero++;
            ps = false;
        }
    }
    cout << min(zero,one);
}