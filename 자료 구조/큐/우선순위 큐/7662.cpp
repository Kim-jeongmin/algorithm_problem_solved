#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int T; cin >> T;

    while(T--){

        priority_queue<ll> max_heap;
        priority_queue<ll> min_heap;
        map<ll, ll> heap_map;

        int heap_size = 0;

        ll k; cin >> k;

        for(int i=0;i<k;i++){
            char a; ll b; cin >> a >> b;

            if(a == 'I'){
                max_heap.push(b); min_heap.push(-b);
                heap_size ++;

                if(heap_map.count(b) != 0) heap_map[b]++;
                else heap_map[b] = 1;
                
            }

            if(a == 'D'){
                if(heap_size == 0) continue;
                
                
                if(b == 1) {

                    while (!max_heap.empty() && heap_map[max_heap.top()] == 0) max_heap.pop();

                    if(!max_heap.empty()){
                        heap_map[max_heap.top()] --;
                        max_heap.pop();
                    }
                }
                else {
                    while (!min_heap.empty() && heap_map[-min_heap.top()] == 0) min_heap.pop();

                    if(!min_heap.empty()){
                        heap_map[-min_heap.top()] --;
                        min_heap.pop();
                    }
                }
            

                heap_size --;
            }
          
        }

        while (!max_heap.empty() && heap_map[max_heap.top()] == 0) max_heap.pop();
        while (!min_heap.empty() && heap_map[-min_heap.top()] == 0) min_heap.pop();


        if(max_heap.empty() || min_heap.empty()) cout << "EMPTY\n";
        else cout << max_heap.top() << ' ' << -min_heap.top() << '\n';
        
    }

}