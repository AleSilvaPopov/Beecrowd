#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        int K; cin >> K;
        vector<string> idiomas(K);

        for(int j=0; j<K; j++){
            cin >> idiomas[j];
        }

        unordered_map<string, int> contagem;
        for(auto& idioma : idiomas) contagem[idioma]++;

        if(contagem.size() > 1) cout << "ingles\n";

        else{
            auto& s = contagem.begin()->first;
            cout << s << "\n";
        }
    }
    return 0;
}