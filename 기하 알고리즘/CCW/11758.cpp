#include <bits/stdc++.h>
using namespace std;



int main(){
    int x_1, y_1, x_2, y_2, x_3, y_3;
    cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

    int ccw = (x_2 - x_1)*(y_3 - y_1) - (x_3 - x_1)*(y_2 - y_1);

    if(ccw > 0) cout << 1;
    else if(ccw == 0) cout << 0;
    else if(ccw < 0) cout << -1;
}