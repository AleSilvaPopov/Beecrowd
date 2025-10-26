#include <iostream>
#include <vector>

using namespace std;

bool ehprimo(int);

int main(){
    int m;
    while(cin >> m){
        vector<int> moedas(m);
        for(int i=0; i<m; i++){
            cin >> moedas[i];
        }
        int n; cin >> n;
        int soma=0;
        for(int i=m-1; i>=0; i-=n){
            soma += moedas[i];
        }

        if(ehprimo(soma)) cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";

        else cout << "Bad boy! I’ll hit you.\n";
    }
    return 0;
}

bool ehprimo(int num){
    if(num <= 1) return false;

    for(long long i=2; i*i<=num; i++){
        if(num%i == 0) return false;
    }
    return true;
}