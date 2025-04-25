#include <iostream>

using namespace std;

int main(){
    int T; cin >> T;
    int A, B, C, D, E; cin >> A >> B >> C >> D >> E;

    int cont=0;
    if(T == A){
        cont++;
    }
    if(T == B){
        cont++;
    }
    if(T == C){
        cont++;
    }
    if(T == D){
        cont++;
    }
    if(T == E){
        cont++;
    }

    cout << cont << "\n";

    return 0;
}