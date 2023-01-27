#include <bits/stdc++.h>
using namespace std;

int main(){
    string pos1, pos2; cin >> pos1 >> pos2;
    int N; cin >> N;
    string arr[51];

    for(int i=0;i<N;i++) cin >> arr[i];

    for(int i=0;i<N;i++){
        string p1 = pos1, p2 = pos2;

        if(arr[i] == "R") {
            pos1[0] += 1;
            if (pos1 == pos2) {
                pos2[0] += 1;
            }
        }
        else if(arr[i] == "L") {
            pos1[0] -= 1;
            if (pos1 == pos2) {
                pos2[0] -= 1;
            }
        }
        else if(arr[i] == "B") {
            pos1[1] -= 1;
            if (pos1 == pos2) {
                 pos2[1] -= 1;
            }
        }
        else if(arr[i] == "T") {
            pos1[1] += 1;
            if (pos1 == pos2) {
                pos2[1] += 1;
            }
        }
        else if(arr[i] == "RT") {
            pos1[0] += 1; pos1[1] += 1;
            if (pos1 == pos2) {
                pos2[0] += 1; pos2[1] += 1;
            }
        }
        else if(arr[i] == "LT"){
            pos1[0] -= 1; pos1[1] += 1;
            if (pos1 == pos2) {
                pos2[0] -= 1; pos2[1] += 1;
            }
        }
        else if(arr[i] == "RB"){
            pos1[0] += 1; pos1[1] -= 1;
            if (pos1 == pos2) {
                pos2[0] += 1; pos2[1] -= 1;
            }
            
        }
        else if(arr[i] == "LB"){
            pos1[0] -= 1; pos1[1] -= 1;
            if (pos1 == pos2) {
                pos2[0] -= 1; pos2[1] -= 1;
            }
        }

        if(('A' > pos1[0] || pos1[0] > 'H') || ('A' > pos2[0] || pos2[0] > 'H') || ('1' > pos1[1] || pos1[1] > '8') || ('1' > pos2[1] || pos2[1] > '8')){
            pos1 = p1; pos2 = p2;
        }
    }
    
    cout << pos1 << '\n' << pos2;
}