#include <iostream>
using namespace std;

int main(){
    int dias; cin >> dias;

    int cont = dias / 365;
    int resto = dias % 365;
    cout << cont << " ano(s)\n";

    cont = resto / 30;
    resto %= 30;
    cout << cont << " mes(es)\n";

    cout << resto << " dia(s)\n";

    return 0;
}