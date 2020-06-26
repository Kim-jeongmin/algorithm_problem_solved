#include <iostream>
using namespace std;

long long a,b,c;

long long pow(long long a, long long b){
    if(b==1) return a;
    if(b%2==0) {
        long long y = pow(a,b/2);
        return y*y%c;
    }
    else {
        long long y = pow(a,(b-1)/2);
        return y*y%c*a%c;
    }
}
int main(){
    cin >> a >> b >> c;
    cout << pow(a%c,b);
}