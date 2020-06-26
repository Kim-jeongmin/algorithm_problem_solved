#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0;
    for(int i=0;i<8;i++){
        string str; cin >> str;
        for(int j=0;j<8;j++){
            if(i%2==0 && j%2==0 && str[j] == 'F') num++;
            else if(i%2==1 && j%2==1 && str[j] == 'F') num++;
        }
    }
    cout << num;
}