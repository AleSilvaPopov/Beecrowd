#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    double dis, soma=0;
    string nome;
    int  contAmigos=0;

    while(getline(cin, nome)){
        cin >> dis;
        cin.ignore();
        soma += dis;
        contAmigos++;
    }

    if(contAmigos != 0) cout << fixed << setprecision(1) << soma/contAmigos << "\n";

    return 0;
}