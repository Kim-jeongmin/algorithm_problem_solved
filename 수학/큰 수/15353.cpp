#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2, resultStr; cin >> str1 >> str2;
    if(str1.size() < str2.size()) swap(str1,str2);
    int j = str2.size() - 1;
    for(int i = str1.size() - 1; i>=0; i--){
        if(j >= 0) {
            int a = str1[i] - '0', b = str2[j] - '0';
            int sum = a + b;
            if(resultStr.size() >= str1.size() - i && resultStr[0] - '0' == 1) {
                sum ++;
                resultStr = resultStr.substr(1);
            } 
            resultStr = to_string(sum) + resultStr;
            j--;         
        }
        else {
            int a = str1[i] - '0';
            if(resultStr.size() >= str1.size() - i && resultStr[0] - '0' == 1) {
                a ++;
                resultStr = resultStr.substr(1);
            } 
            resultStr = to_string(a) + resultStr;
        }
    }
    cout << resultStr;
}