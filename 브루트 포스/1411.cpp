#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    int result = 0;

    vector<string> v(N);
    for(int i=0;i<N;i++) cin >> v[i];

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            string str1 = v[i];
            string str2 = v[j];
            
            int arr[26];
            fill_n(arr, 26, -1);
            int size = str1.size();
            bool flag = true;

            for(int k=0;k<size;k++){
                if(arr[str1[k] - 'a'] == -1) arr[str1[k]  - 'a'] = str2[k] - 'a';

                if(arr[str1[k] - 'a'] != str2[k] - 'a') flag = false; 
            }

            fill_n(arr, 26, -1);
            for(int k=0;k<size;k++){
                if(arr[str2[k] - 'a'] == -1) arr[str2[k]  - 'a'] = str1[k] - 'a';

                if(arr[str2[k] - 'a'] != str1[k] - 'a') flag = false; 
            }

            if(flag) result++;


        }
    }

    cout << result;
}