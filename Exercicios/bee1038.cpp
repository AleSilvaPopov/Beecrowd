/*Com base na tabela abaixo, escreva um programa que leia o código de 
um item e a quantidade deste item. A seguir, calcule e mostre o valor 
da conta a pagar.

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código 
e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, 
com 2 casas após o ponto decimal.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cdg, quant;
    float total;
    cin >> cdg >> quant;
    if(cdg == 1){
        total = quant * 4;
    }
    else if(cdg == 2){
        total = quant * 4.5;
    }
    else if(cdg == 3){
        total = quant * 5;
    }
    else if(cdg == 4){
        total = quant * 2;
    }
    else{
        total = quant * 1.5;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}
