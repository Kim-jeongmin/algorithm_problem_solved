#include <bits/stdc++.h>
using namespace std;

int dp[4001][4001], result = 0;

int main(){
    string str1, str2; cin >> str1 >> str2;

    str1 = '0' + str1;
    str2 = '0' + str2;

    for(int i=1;i<str1.size();i++){
        for(int j=1;j<str2.size();j++){

            if(str1[i] == str2[j])  dp[i][j] = dp[i-1][j-1] + 1;

            result = max(result, dp[i][j]);
        }
    }

    cout << result;

}