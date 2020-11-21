#include <bits/stdc++.h>
using namespace std;

int main(){
  int cnt; cin >> cnt;
  for(int i=1;i<=cnt;i++){
    int num; cin >> num;
    vector<int> v(num);
    for(int j=0;j<num;j++){
      cin >> v[j];
    }
    sort(v.begin(),v.end());
    int Max = v[num-1], Min = v[0], Lg = 0;
    cout << "Class " << i << '\n';
    for(int j=0;j<num-1;j++){
      if(abs(v[j] - v[j+1]) > Lg) Lg = abs(v[j] - v[j+1]);
    }
    cout << "Max " << Max <<", Min " << Min << ", Largest gap " << Lg << '\n';
  }
}