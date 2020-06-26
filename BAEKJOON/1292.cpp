#include <iostream>
using namespace std;

int a,b,result = 0,num = 0;
int current[10001]; 

int main(){
    cin >> a >> b;
    for(int i=1;i<50;i++){
        for(int j=0;j<i;j++){
            current[num] = i;
            num ++;
        }
    }
    for(int i = a-1;i<b;i++){
        result += current[i];
    }
    cout << result << '\n';
    
}