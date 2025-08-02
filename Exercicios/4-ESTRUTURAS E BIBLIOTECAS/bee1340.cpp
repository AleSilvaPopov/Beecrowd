#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        stack<int> stc;
        queue<int> q;
        priority_queue<int> pq;

        bool eh_stack = true;
        bool eh_queue = true;
        bool eh_pq = true;

        for(int i = 0; i<n; i++){
            int op, x; cin >> op >> x;

            if(op == 1){
                stc.push(x);
                q.push(x);
                pq.push(x);
            }
            else if(op == 2){
                if(stc.empty() || q.empty() || pq.empty()) eh_pq = eh_queue = eh_stack = false;

                else {
                    if(eh_stack){
                        int topo = stc.top();
                        stc.pop();
                        if(topo != x) eh_stack = false;
                    }
                    if(eh_queue){
                        int primeiro = q.front();
                        q.pop();
                        if(primeiro != x) eh_queue = false;
                    }
                    if(eh_pq){
                        int maior = pq.top();
                        pq.pop();
                        if(maior != x) eh_pq = false; 
                    }
                }
            }
        }
        int cont=0;
        if(eh_stack) cont++;
        if(eh_queue) cont ++;
        if(eh_pq) cont ++;

        if(cont == 0) cout << "impossible\n";

        else if(cont > 1) cout << "not sure\n";

        else{
            if(eh_stack) cout << "stack\n";

            else if(eh_queue) cout << "queue\n";

            else cout << "priority queue\n";
        }
    }

    return 0;
}