#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
#include <set>
using namespace std;


int main(){
    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string frase;
        getline(cin, frase);

        unordered_map<char, int> contagem;

        for(char c : frase){
            if(c != ' '){
                char l = tolower(c);
                contagem[l]++;
            }
        }

        int maior=0;
        for(auto& par : contagem){
            if(par.second >= maior){
                maior = par.second;
            }
        }
        set<char> letras_maior;
        for(auto& par : contagem){
            if(par.second == maior){
                letras_maior.insert(par.first);
            }
        }

        for(char c : letras_maior){
            cout << c;
        }

        cout << '\n';
    }

    return 0;
}