#include <iostream>
#include <vector>

using namespace std;

char questao(vector<int>&);

int main(){
    int N;

    while(cin >> N && N != 0){
        for(int j=0; j<N; j++){
            vector<int> alternativa(5);

            for(int i=0; i<5; i++){
                cin >> alternativa[i]; 
            }
            cout << questao(alternativa) << '\n';
        }
    }
    return 0;
}

char questao(vector<int> &alternativa){
    int marcada = -1;
    bool invalida = false;

    for(int i=0; i<5; i++){
        if(alternativa[i] <= 127){
            if(marcada != -1){
                invalida=true;
                break;
            }
            marcada = i;
        }
    }
    if(invalida || marcada == -1){
        return '*';
    }
    else{
        return 'A' + marcada;
    }
}