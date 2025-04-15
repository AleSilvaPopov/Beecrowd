/*Leia uma quantidade indeterminada de duplas de valores 
inteiros X e Y. Escreva para cada X e Y uma mensagem que 
indique se estes valores foram digitados em ordem crescente 
ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois 
valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido 
valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido 
digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.*/

#include <iostream>
using namespace std;

int main(){
    int A = - 1, B = -2;

    while(A != B){
        cin >> A >> B;

        if(A > B){
            cout << "Decrescente" << endl;
        }
        else{
            cout << "Crescente" << endl;
        }
    }
    return 0;
}