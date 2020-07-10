#include <iostream>
using namespace std;

int arr[301][301];

int main(){
    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> arr[i][j];
    int num; cin >> num;
    for(int k=0;k<num;k++){
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for(int i=x1-1;i<x2;i++) for(int j=y1-1;j<y2;j++) sum+=arr[i][j];
        cout << sum << '\n';
    } 
}