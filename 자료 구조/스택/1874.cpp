#include <bits/stdc++.h>
using namespace std;

stack<int> st;

void stackClear(){
    while(!st.empty()){
        st.pop();
    }
}


int main(){
    bool NO = false;
    int num; cin >> num;
    vector<int> v(num);
    
    for(int i=0;i<num;i++){
        cin >> v[i];
    }

    int std = v[0];
    st.push(v[0]);
    for(int i=1;i<num;i++){
        if(std > v[i]){
            if(st.top() > v[i]){
                st.push(v[i]);
            }
            else {
                NO = true;
                break;
            }
        }
        else {
            std = v[i];
            stackClear();
            st.push(v[i]);
        }
    }

    if(NO == true) cout << "NO";
    else {
        int MAX = 0;
        for(int i=0;i<num;i++){
            if(v[i] > MAX) {
                for(int j=0;j<v[i]-MAX;j++){
                    cout << "+\n";
                }
                MAX = v[i];
            }
            cout << "-\n";
        }
    }

}