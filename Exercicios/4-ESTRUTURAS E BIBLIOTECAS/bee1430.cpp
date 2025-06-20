#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<char, double> notas;
    notas = {
        {'W', 1.0},
        {'H', 1.0/2.0},
        {'Q', 1.0/4.0},
        {'E', 1.0/8.0},
        {'S', 1.0/16.0},
        {'T', 1.0/32.0},
        {'X', 1.0/64.0},
    };

    string composicao;

    while(cin >> composicao && composicao != "*"){
        int cont=0;
        double n = 0.0;
        for(char c : composicao){
            if(c != '/')
                n += notas[c];
            else{
                if(n == 1.0) cont++; 
                n=0.0;
            }
        }
        cout << cont << '\n';
    }
    return 0;
}