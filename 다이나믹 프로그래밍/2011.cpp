#include <bits/stdc++.h>
#define MOD 1000000
using namespace std;

int main(){

    string str; cin >> str;
    vector<int> v(str.size());

    // 한 자리수 일 때
    if(stoi(str.substr(0, 1)) != 0)  v[0] = 1;
    else {
        cout << 0;
        return 0;
    }

    // 두 자리수 일 때

    if(str.size() >= 2){
        
        int num = stoi(str.substr(0, 2));


        if(num == 10 || num == 20) v[1] = 1;
        else if((11<= num && num < 20) || (20 < num && num <= 26)) v[1] = 2;
        else if(num % 10 == 0){
            cout << 0;
            return 0;
        }
        else v[1] = 1;
        
    }

    // 세 자리수 이상 일 때
    
    if(str.size() >= 3){
        for(int i=1;i<str.size()-1;i++){

            int num = stoi(str.substr(i, 2));

            if(num == 10 || num == 20) v[i+1] = v[i-1];
            else if((11<= num && num < 20) || (20 < num && num <= 26)) v[i+1] = v[i] + v[i-1];
            else if(num %10 == 0){
                cout << 0;
                return 0;
            }
            else v[i+1] = v[i];
            
            
            v[i+1]%=MOD;
        }
    }
    

    cout << v[str.size()-1];

}