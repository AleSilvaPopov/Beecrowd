#include <iostream>
using namespace std;

int main(){

    int valor; cin >> valor;

    cout << valor << "\n";

    int cont = valor / 100;
    int resto = valor % 100;
    cout << cont << " nota(s) de R$ 100,00\n";

    cont = resto / 50;
    resto %= 50;
    cout << cont << " nota(s) de R$ 50,00\n";

    cont = resto / 20;
    resto %= 20;
    cout << cont << " nota(s) de R$ 20,00\n";

    cont = resto / 10;
    resto %= 10;
    cout << cont << " nota(s) de R$ 10,00\n";

    cont = resto / 5;
    resto %= 5;
    cout << cont << " nota(s) de R$ 5,00\n";

    cont = resto / 2;
    resto %= 2;
    cout << cont << " nota(s) de R$ 2,00\n";

    cont = resto / 1;
    resto %= 1;
    cout << cont << " nota(s) de R$ 1,00\n";

    return 0;
}