#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string senha;

    while(getline(cin, senha)){

        if(senha.size() < 6 || senha.size() > 32){
            cout << "Senha invalida.\n";
            continue;
        }

        bool maiuscula = false, minuscula = false, num = false, invalido = false;
        for(char c : senha){
            if (isupper(c)) {
                maiuscula = true;
            } else if (islower(c)) {
                minuscula = true;
            } else if (isdigit(c)) {
                num = true;
            } else {
                invalido = true;
                break;
            }
        }
        if(minuscula && maiuscula && num && !invalido) cout << "Senha valida.\n";
            
        else cout << "Senha invalida.\n";
    }
    return 0;
}