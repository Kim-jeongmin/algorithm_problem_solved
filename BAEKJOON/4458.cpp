#include <iostream>
#include <string>
using namespace std;

int main(){
    int num; cin >> num;
    cin.ignore();
    for(int i=0;i<num;i++){
        string str; getline(cin,str);
        if('a'<=str[0]&&str[0]<='z') str[0] = toupper(str[0]);
        cout << str << '\n';
    }
}