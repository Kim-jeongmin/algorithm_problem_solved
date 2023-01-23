#include <bits/stdc++.h>
using namespace std;

char arr[12][12];
char result[12][12];

int main(){
    string A, B; cin >> A >> B;
    int r = A.size();
    int c = B.size()/A.size();

    for(int i=0;i<r;i++){
        arr[0][i] = A[i];
    }

    sort(arr[0], arr[0]+r);


    int cnt = 0;
    for(int i=0;i<r;i++){
        for(int j=1;j<=c;j++){
            arr[j][i] = B[cnt++];
        }
    }
    

    bool visited[12];
    for(int i=0;i<r;i++) visited[i] = false;


    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(arr[0][i] == (char)A[j] && !visited[j]){
                visited[j] = true;
                for(int k=0;k<=c;k++){
                    result[k][j] = arr[k][i];
                }
                break;
            }
        }
    }

    for(int i=1;i<=c;i++){
        for(int j=0;j<r;j++){
            cout << result[i][j];
        }
    }


}