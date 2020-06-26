#include <iostream>
using namespace std;

int main(){
    int a; cin >> a;
    for(int i=0;i<a;i++){
        if(i%2==0){
            for(int j=0;j<a;j++){
                cout << "* ";
            }
        }
        else {
            for(int j=0;j<a;j++){
                cout << " *";
            }
        }
        cout << '\n';
    }
}