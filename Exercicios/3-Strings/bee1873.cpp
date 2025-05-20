#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
    int N; cin >> N;

    map<string, set<string>> regras = {
        {"tesoura", {"papel", "lagarto"}},
        {"papel", {"pedra", "spock"}},
        {"pedra", {"tesoura", "lagarto"}},
        {"lagarto", {"spock", "papel"}},
        {"spock", {"tesoura", "pedra"}}
    };
    for(int i=0; i<N; i++){
        string j1, j2; cin >> j1 >> j2; // j1=rajesh e j2 = sheldon

        if(j1 == j2) cout << "empate\n";

        else if(regras[j1].count(j2)) cout << "rajesh\n";

        else cout << "sheldon\n";
    }
    return 0;
}