#include <bits/stdc++.h>
using namespace std;

int main(){
  int testCase; cin >> testCase;
  while(testCase--){

    bool flag = false;
    string str; int num;
    cin >> str >> num;
    int p=0, q=1;
    int result1 = str.size(), result2 = 0;
    vector<int> v(26);

    v[str[0]-'a']++;
    v[str[1]-'a']++;

    while(p<str.size() && q<str.size()){

      if(str[p] == str[q]){

        if(v[str[p]-'a'] == num){
          flag = true;
          result1 = min(result1, q-p+1);
          result2 = max(result2, q-p+1);
          v[str[p++]-'a']--;
        }
        else if(v[str[p]-'a'] > num){
          v[str[q--]-'a']--;
        }
        else {
          
        }


      } 
      else {

      }

    }

    if(flag == true) cout << result1 << ' ' << result2 << '\n';
    else cout << -1;

  }
}