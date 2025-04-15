/*A primeira linha da entrada contém dois números 
inteiros N (1 ≤ N ≤ 30) e S (−103 ≤ S ≤ 103) que 
indicam respectivamente o número de dias do período 
de interesse e o saldo da conta no início do período. 
Cada uma das N linhas seguintes contém um número inteiro 
indicando a movimentação de um dia (−103 ≤ cada movimentação ≤ 103), 
(valor positivo no caso de depósito, valor negativo no caso de retirada). 
A movimentação é dada para um período de N dias consecutivos: a primeira das N 
linhas corresponde ao primeiro dia do período de interesse, a segunda linha 
corresponde ao segundo dia, e assim por diante.

Saída
Seu programa deve imprimir uma única linha, contendo um único número 
inteiro, o menor valor de saldo da conta no período dado.*/

#include <iostream>
using namespace std;

int main(){
    int N;
    long int S, depo_reti, temp;
    cin >> N >> S;
    temp = S;
    for(int i=0; i<N; i++){
        cin >> depo_reti;
        temp += depo_reti;
        if(temp < S){
            S = temp;
            temp = S;
        }
    }
    cout << S << endl;

    return 0;
}