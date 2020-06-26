#include <iostream>
#include <string>
using namespace std;

int main(){
    while(true){
        string name; int age, w; cin >> name >> age >> w;
        if(name == "#") break;
        if(age > 17 || w >= 80) cout << name << " Senior\n";
        else cout << name << " Junior\n";
    }
}