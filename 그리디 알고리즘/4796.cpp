#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(true){
        int a,b,c; cin >> a >> b >> c;
        if(a==0) break;
        int num1 = c/b;
        int num2 = c - num1*b;
        if(num2<a){
            cout << "Case " << i << ": " << num2+num1*a << '\n';
        }
        else cout << "Case " << i << ": " << a+num1*a << '\n';
        i++;
    }
}