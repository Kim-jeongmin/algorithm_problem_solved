#include <iostream>
#include <string>
using namespace std;

int main(){
    int b; cin >> b;
    cin.ignore();
    while(b--){
        string str; getline(cin,str);
        int a=0,k,s=0;
        for(int i=0;i<str.size();i++){
            if(a>=2) cout << str[i];
            if(str[i] == ' ') a++;
            if(a==2 && s==0){
              k=i;
              s++;
            }
        }
        cout << ' ';
        for(int i=0;i<k;i++){
            cout << str[i];
        }
        cout << '\n';
    }
}