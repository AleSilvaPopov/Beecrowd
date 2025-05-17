#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> PriLetra(string);

int main(){
    string frase;

    while(getline(cin, frase)){
        vector<char> iniciais = PriLetra(frase);

        if(iniciais.empty()){
            cout << "0\n";
            continue;
        }

        int cont=0;
        char atual = iniciais[0];
        int tamanho_grupo=1;

        for(size_t i=1; i<iniciais.size(); i++){
            if(iniciais[i] == atual) tamanho_grupo++; 
                else{
                if(tamanho_grupo >= 2) cont++;

                atual = iniciais[i];
                tamanho_grupo=1;
            }
        }

        if(tamanho_grupo >= 2) cont++;

        cout << cont << "\n";

    }
    return 0;
}

vector<char> PriLetra(string s){
    vector<char> iniciais;

    for(size_t i=0; i<s.size(); i++){
        if(i==0 || s[i-1] == ' '){
            iniciais.push_back(tolower(s[i]));
        }
    }

    return iniciais;
}