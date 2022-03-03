#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;
    vector<string> v;

    for(int i=1;i<str.size()-1;i++){
        for(int j=i+1;j<str.size();j++){

            string temp_str_1 = str.substr(0, i);
            string temp_str_2 = str.substr(i, j-i);
            string temp_str_3 = str.substr(j-i, str.size()-(j-i));  

            temp_str = reverse(temp_str_1.begin(), temp_str_1.end()) + reverse(temp_str_2.begin(), temp_str_2.end()) + reverse(temp_str_3.begin(), temp_str_3.end());

            v.push_back(temp_str);

        }
    }
    
    sort(v.begin(), v.end());

    cout << v[0];


}