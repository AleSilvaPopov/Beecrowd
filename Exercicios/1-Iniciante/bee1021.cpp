#include <iostream>

using namespace std;

int main() {
    float valor;
    cin >> valor;

    int valor_em_centavos = valor * 100;

    cout << "NOTAS:" << endl;

    int cont = valor_em_centavos / 10000;
    valor_em_centavos %= 10000;
    cout << cont << " nota(s) de R$ 100.00" << endl;

    cont = valor_em_centavos / 5000;
    valor_em_centavos %= 5000;
    cout << cont << " nota(s) de R$ 50.00" << endl;

    cont = valor_em_centavos / 2000;
    valor_em_centavos %= 2000;
    cout << cont << " nota(s) de R$ 20.00" << endl;

    cont = valor_em_centavos / 1000;
    valor_em_centavos %= 1000;
    cout << cont << " nota(s) de R$ 10.00" << endl;

    cont = valor_em_centavos / 500;
    valor_em_centavos %= 500;
    cout << cont << " nota(s) de R$ 5.00" << endl;

    cont = valor_em_centavos / 200;
    valor_em_centavos %= 200;
    cout << cont << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    cont = valor_em_centavos / 100;
    valor_em_centavos %= 100;
    cout << cont << " moeda(s) de R$ 1.00" << endl;

    cont = valor_em_centavos / 50;
    valor_em_centavos %= 50;
    cout << cont << " moeda(s) de R$ 0.50" << endl;

    cont = valor_em_centavos / 25;
    valor_em_centavos %= 25;
    cout << cont << " moeda(s) de R$ 0.25" << endl;

    cont = valor_em_centavos / 10;
    valor_em_centavos %= 10;
    cout << cont << " moeda(s) de R$ 0.10" << endl;

    cont = valor_em_centavos / 5;
    valor_em_centavos %= 5;
    cout << cont << " moeda(s) de R$ 0.05" << endl;

    cont = valor_em_centavos / 1;
    valor_em_centavos %= 1;
    cout << cont << " moeda(s) de R$ 0.01" << endl;

    return 0;
}