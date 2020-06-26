#include <iostream>
using namespace std;

int main(){
    int num;
    while(cin >> num){
        long long result = 0;
        for(int i=0;i<num;i++){
            long long a; cin >> a;
            result += a;
        }
        if(result > 0) cout <<  "+\n";
        else if(result == 0) cout << "0\n";
        else cout << "-\n"; 
    }
}