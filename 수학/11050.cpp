#include <iostream>
using namespace std;

int pac(int a){
    int result = 1;
    while(a!=0){
        result *= a;
        a--;
    }
    return result;
}
int main(){
    int a, b; cin >> a >> b;
    int x = pac(a);
    int y = pac(b);
    int z = pac(a-b);
    cout << x / (y*z) << '\n';
}