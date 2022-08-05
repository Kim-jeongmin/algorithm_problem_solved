#include <bits/stdc++.h>
using namespace std;

int N, result = 0;
int arr[51];

bool is_zero(){

    bool flag = true;

    for(int i=0;i<N;i++){
        if(arr[i]) {
            flag = false;
            break;
        }
    }

    return flag;
}

int main(){
    cin >> N;
    
    for(int i=0;i<N;i++) cin >> arr[i];
    
    while(1){

        if(is_zero()) {
            cout << result;
            break;
        }

        bool div_exist = true;
        for(int i=0;i<N;i++) {
            if(arr[i]%2){
                div_exist = false;
                break;
            }
        }

        if(div_exist){
            for(int i=0;i<N;i++){
                arr[i] /= 2;
            }
            result++;
        }
        else{
            for(int i=0;i<N;i++){
                if(arr[i]%2){
                    result++;
                    arr[i]--;
                }
            }
        }


    }
    
}
