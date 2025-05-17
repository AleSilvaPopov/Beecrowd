#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string frase; getline(cin, frase);

        string decodificada;
        bool nova_palavra = true;
        for(char c : frase){
            if(c == ' '){
                nova_palavra = true;
            } else {
                if(nova_palavra){
                    decodificada += c;
                    nova_palavra = false;
                }
            }
        }

        cout << decodificada << "\n";
    }

    return 0;
}