#include <iostream>
#include <map>
#include <string>

using namespace std;

void preencheMap(map<char, char>&, const string&);

int main(){
    map<char, char> teclado;

    string linha1 = "`1234567890-=";
    string linha2 = "QWERTYUIOP[]\\";
    string linha3 = "ASDFGHJKL;'";
    string linha4 = "ZXCVBNM,./";

    preencheMap(teclado, linha1);
    preencheMap(teclado, linha2);
    preencheMap(teclado, linha3);
    preencheMap(teclado, linha4);


    string lerTexto;

    while (getline(cin, lerTexto)) {
        for (char c : lerTexto) {
            if (c == ' ') {
                cout << ' ';
            } 
            else {
                cout << teclado[c];
            }
        }
        cout << endl;
    }

    return 0;
}

void preencheMap(map<char, char>& chave, const string& linha) {
    for (size_t i = 1; i < linha.length(); ++i) {
        chave[linha[i]] = linha[i - 1];
    }
}