#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int S;
    cin >> S;
    for(int i=0; i<S; i++){
        int N;
        cin >> N;
        float P;
        cin >> P;
        int I;
        cin >> I;

        float probabilidade, numerador, denominador;
        numerador = P*pow(1-P, I-1);
        denominador = 1-pow(1-P, N);

        if(denominador != 0){
            probabilidade = numerador/denominador;
            cout << fixed << setprecision(4) << probabilidade << endl;
        }
        else{
            cout << "0.0000" << endl;
        }
    }

    return 0;
}