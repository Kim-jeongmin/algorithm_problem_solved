#include <bits/stdc++.h>
using namespace std;


long max_result = 0;
long arr[20][20];


int main(){
	
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			
			long v = 1, h = 1, d_1 = 1, d_2 = 1;
			
			for(int k=0;k<4;k++){
				if(i <= 16) v *= arr[i + k][j];
				if(j <= 16) h *= arr[i][j + k];
				if(i <= 16 && j <= 16) d_1 *= arr[i + k][j + k];
        if(i >= 3 && j <= 16) d_2 *= arr[i - k][j + k];
			}
			
			max_result = max(max(max_result, v), max(max(h, d_1), d_2));
			
		}
	}
	
	cout << max_result << '\n';

  for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cout << arr[i][j] << ' ';
		}
    cout << '\n';
	}
}