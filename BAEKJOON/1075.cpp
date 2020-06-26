#include <iostream>
using namespace std;

int main(){
    long long a, b; cin >> a >> b;
    long long num = a%100;
    a-=num;
    for(long long i=0;i<100;i++){
        if((a+i)%b==0) {
            if(i<10) cout << '0' << i;
            else cout << i;
            break;
        }
    }
}