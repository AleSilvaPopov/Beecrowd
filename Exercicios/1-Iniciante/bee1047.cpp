#include <iostream>

using namespace std;

int main(){
    int hi, hf, mi, mf;

    cin >> hi >> mi >> hf >> mf;

    int minIniciais = hi * 60 + mi, minFinais = hf * 60 + mf;

    int minutosTotais;
    if(minFinais > minIniciais){
        minutosTotais = (minFinais - minIniciais);
    }
    else if(minFinais < minIniciais){
        minutosTotais = (24 * 60 - minIniciais) + minFinais;
    }
    else{
        minutosTotais = 24 * 60;
    }
    
    int horas, min;
    horas = minutosTotais / 60;
    min = minutosTotais % 60;

    cout << "O JOGO DUROU " <<  horas <<  " HORA(S) E " << min << " MINUTO(S)" << endl;

    return 0;
}