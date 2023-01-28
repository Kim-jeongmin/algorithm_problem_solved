#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2; cin >> str1 >> str2;

    int result = 51;
    for(int i=0;i<=str2.size()-str1.size();i++){

        int cnt = 0;
        for(int j=i;j<str1.size()+i;j++){
            if(str1[j-i] != str2[j]) cnt ++;
        }

        result = min(result, cnt);
    }

    cout << result;
}