/*A entrada terá diversos casos de teste. A cada caso de teste,
terá um número N, que representa o número escrito no papel (1001 ≤ N ≤ 9999).
A entrada termina com o fim do arquivo.

Saída
Para cada caso de teste, imprima a senha correspondente. Em todos os casos, a 
fórmula será a mesma, igual aos exemplos abaixo.*/
#include <iostream>
using namespace std;

int main(){
    int N, senha;
    
    while(cin >> N){
        senha = N - 1;
        cout << senha << endl;
    }

    return 0;
}