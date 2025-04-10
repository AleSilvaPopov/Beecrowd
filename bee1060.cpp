/*Faça um programa que leia 6 valores. Estes valores serão somente 
negativos ou positivos (desconsidere os valores nulos). A seguir, 
mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.*/

#include <iostream>
using namespace std;

int main(){
    float v1, v2, v3, v4, v5, v6, cont = 0;
    cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6;
    if(v1 > 0){
        cont++;
    }
    if(v2 > 0){
        cont++;
    }
    if(v3 > 0){
        cont++;
    }
    if(v4 > 0){
        cont++;
    }
    if(v5 > 0){
        cont++;
    }
    if(v6 > 0){
        cont++;
    }

    cout << cont << " valores positivos" << endl;

    return 0;
}
