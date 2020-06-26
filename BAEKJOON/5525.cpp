#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    string text; cin >> text;
    int result = 0;
    for(int i=0;i<b;i++){
        string str = "I";
        if(text[i] == 'I'){
            for(int j=i+1;j<b;j++){
                if(str[str.size()-1] != text[j]) {
                    str += text[j];
                    i = j;
                }
                else {
                    if(str[str.size()-1] == 'O') str = str.substr(0,str.size()-1);    
                    i = j - 1;
                    break;
                }
            }
            if(str[str.size()-1] == 'O') str = str.substr(0,str.size()-1); 
            if((str.size()/2) > (a-1)) result += (str.size()/2) - (a-1);
        }
    }
    cout << result;
}