#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, S; cin >> N;

    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    cin >> S;


    for(int i=0;i<N;i++){
        int MAX = v[i], MAX_index = i;
        for(int j=i+1;j<=min(i+S, N-1);j++){
            if(MAX < v[j]){
                MAX = v[j];
                MAX_index = j;
            }
        }

        for(int j=MAX_index;j>i;j--){
            swap(v[j], v[j-1]); S--;
        }

        if(S == 0) break;
    }

    for(int i=0;i<N;i++){
        cout << v[i] << ' ';
    }
    
}