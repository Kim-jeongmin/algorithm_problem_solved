#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase; cin >> testCase;
    while(testCase--){
        string str; cin >> str;
        list<char> lt;
        list<char>::iterator lt_iter = lt.begin();
        int str_len = str.size(), str_idx = 0;

        while(str_idx < str_len) {
            if(str[str_idx] == '<'){
                if(lt_iter != lt.begin()) lt_iter--;
            }
            else if(str[str_idx] == '>'){
                if(lt_iter != lt.end()) lt_iter++;
            }
            else if(str[str_idx] == '-'){
                if(lt_iter != lt.begin()) lt.erase((--lt_iter)++);
            }
            else {
                lt.insert(lt_iter, str[str_idx]);
            }
            str_idx++;
        }

        for(auto x : lt) cout << x;
        cout << '\n';
    }
    return 0;
}