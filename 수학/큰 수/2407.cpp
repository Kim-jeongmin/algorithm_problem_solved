#include <bits/stdc++.h>
using namespace std;

string add(string str1, string str2){
    string resultStr;
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
    return resultStr;
}
int main(){
    int n,m; cin >> n >> m;
    string arr[101][101];
    arr[1][1] = "1"; arr[1][0] = "1";
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) arr[i][j] = "1";
            else arr[i][j] = add(arr[i-1][j],arr[i-1][j-1]);
        }
    }
    cout << arr[n][m] << '\n';
}