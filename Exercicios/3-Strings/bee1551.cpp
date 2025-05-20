#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string frase; getline(cin, frase);

        unordered_map<char, int> contagem;
        for(char c : frase){
            if(c > 64) contagem[c]++;
        }

        if(contagem.size() == 26) cout << "frase completa" << endl;

        else if(contagem.size() >= 12) cout << "frase quase completa" << endl;

        else cout << "frase mal elaborada" << endl;
    }
    return 0;
}